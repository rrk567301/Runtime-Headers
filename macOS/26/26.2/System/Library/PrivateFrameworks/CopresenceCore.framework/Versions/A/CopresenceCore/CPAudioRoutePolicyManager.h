@class TURoute;

@interface CPAudioRoutePolicyManager : NSObject <TURouteControllerDelegate, CPAudioRoutePolicyManager> {
    void /* unknown type, empty encoding */ observers;
    void /* unknown type, empty encoding */ _pickedRoute;
    void /* unknown type, empty encoding */ routeController;
}

@property (class, nonatomic, readonly) CPAudioRoutePolicyManager *sharedInstance;

@property (nonatomic, retain) TURoute *pickedRoute;
@property (nonatomic, readonly) BOOL sharePlaySupported;

- (void).cxx_destruct;
- (id)init;
- (void)routesChangedForRouteController:(id)a0;
- (void)switchToSpeakerRouteIfNecessary;
- (void)addObserver:(id)a0 withQueue:(id)a1;

@end
