@class MNNavigationSessionState;

@interface MNDestinationArrivalInfoUpdater : NSObject <Navigation.MNRemainingTimeUpdaterDelegate, MNNavigationSessionStateListener> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ _navigationSessionState;
    void /* unknown type, empty encoding */ _remainingTimeUpdater;
}

@property (nonatomic, retain) MNNavigationSessionState *navigationSessionState;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)remainingTimeUpdater:(id)a0 didUpdateDisplayETAInfo:(id)a1 reason:(long long)a2;

@end
