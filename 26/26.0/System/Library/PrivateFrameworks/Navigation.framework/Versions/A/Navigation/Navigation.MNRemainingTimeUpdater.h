@class NSDate, MNNavigationSessionState;

@interface Navigation.MNRemainingTimeUpdater : NSObject <MNNavigationSessionStateListener> {
    void /* unknown type, empty encoding */ _navigationSessionState;
    void /* unknown type, empty encoding */ _routes;
    void /* unknown type, empty encoding */ _timerToNextMinute;
    void /* unknown type, empty encoding */ _stabilizeETA;
    void /* unknown type, empty encoding */ dateOverride;
}

@property (nonatomic, retain) MNNavigationSessionState *navigationSessionState;
@property (nonatomic, weak) void /* function */ delegate;
@property (nonatomic, copy) NSDate *dateOverride;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithNavigationSessionState:(id)a0;
- (void)updateForNewETAUResponse;

@end
