@class NSArray, NSString, NSDictionary;

@interface CASecureFlipBookLayer : CALayer {
    struct SILStateMachine { } *_machine;
    NSString *_type;
    NSString *_currentState;
    NSString *_nextState;
    unsigned short _currentFrame;
    unsigned short _commitedFrame;
}

@property (readonly) NSArray *states;
@property (readonly) NSString *type;
@property (readonly) NSString *currentState;
@property (readonly) NSString *nextState;
@property (readonly) NSArray *validPositions;
@property (readonly) NSArray *validDynamicPositions;
@property (readonly) NSDictionary *userInfo;

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)a0;
+ (BOOL)_hasRenderLayerSubclass;
+ (id)secureFlipBookWithType:(id)a0;

- (BOOL)transitionToState:(id)a0;
- (void *)_copyRenderLayer:(void *)a0 layerFlags:(unsigned int)a1 commitFlags:(unsigned int *)a2;
- (BOOL)canTransitionToState:(id)a0;
- (void)dealloc;
- (BOOL)forceTransitionToState:(id)a0;
- (void)tick:(double)a0;
- (BOOL)validTransitionFromState:(id)a0 toState:(id)a1;

@end
