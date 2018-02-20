################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
import utils
from . import destructors
libczmq_destructors = destructors.lib

class Zclock(object):
    """
    millisecond clocks and delays
    """

    def sleep(msecs):
        """
        Sleep for a number of milliseconds
        """
        utils.lib.zclock_sleep(msecs)

    def time():
        """
        Return current system clock as milliseconds. Note that this clock can
        jump backwards (if the system clock is changed) so is unsafe to use for
        timers and time offsets. Use zclock_mono for that instead.
        """
        return utils.lib.zclock_time()

    def mono():
        """
        Return current monotonic clock in milliseconds. Use this when you compute
        time offsets. The monotonic clock is not affected by system changes and
        so will never be reset backwards, unlike a system clock.
        """
        return utils.lib.zclock_mono()

    def usecs():
        """
        Return current monotonic clock in microseconds. Use this when you compute
        time offsets. The monotonic clock is not affected by system changes and
        so will never be reset backwards, unlike a system clock.
        """
        return utils.lib.zclock_usecs()

    def timestr():
        """
        Return formatted date/time as fresh string. Free using zstr_free().
        """
        return utils.lib.zclock_timestr()

    def test(verbose):
        """
        Self test of this class.
        """
        utils.lib.zclock_test(verbose)

################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
