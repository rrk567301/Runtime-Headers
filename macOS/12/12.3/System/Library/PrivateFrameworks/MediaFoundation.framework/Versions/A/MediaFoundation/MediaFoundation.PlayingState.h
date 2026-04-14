@interface MediaFoundation.PlayingState : MediaFoundation.TransportableState {
    void /* unknown type, empty encoding */ resumeOnEnter;
    void /* unknown type, empty encoding */ isStalled;
    void /* unknown type, empty encoding */ playbackDidStopEvent;
    void /* unknown type, empty encoding */ disarmingTimer;
    void /* unknown type, empty encoding */ bugReportingTimer;
    void /* unknown type, empty encoding */ missingInterruptionDelay;
    void /* unknown type, empty encoding */ missingRouteChangeDelay;
    void /* unknown type, empty encoding */ didReceiveRateChangeForInterruption;
    void /* unknown type, empty encoding */ didReceiveRateChangeForRouteChangeRequiringPause;
    void /* unknown type, empty encoding */ missingInterruptionTimer;
    void /* unknown type, empty encoding */ missingRouteChangeTimer;
}

@end
