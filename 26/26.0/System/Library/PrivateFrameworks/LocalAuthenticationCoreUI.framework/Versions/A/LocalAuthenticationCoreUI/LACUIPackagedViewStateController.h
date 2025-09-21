@class NSString, LACUIPackagedViewStateTransition;
@protocol LACUIPackagedViewPlatformStateController;

@interface LACUIPackagedViewStateController : NSObject <LACUIPackagedViewPlatformStateControllerDelegate> {
    id<LACUIPackagedViewPlatformStateController> _stateController;
    LACUIPackagedViewStateTransition *_pendingStateTransition;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLayer:(id)a0;
- (void).cxx_destruct;
- (void)setInitialState;
- (void)_clearPendingTransitionWithFlag:(BOOL)a0;
- (id)initWithPlatformStateController:(id)a0;
- (void)packagedViewPlatformStateController:(id)a0 didTransitionToState:(id)a1 completed:(BOOL)a2;
- (void)setState:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;

@end
