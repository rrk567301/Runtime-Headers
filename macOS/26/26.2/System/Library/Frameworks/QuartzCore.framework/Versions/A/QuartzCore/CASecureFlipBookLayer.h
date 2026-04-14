@class NSArray, NSString, NSDictionary;

@interface CASecureFlipBookLayer : CALayer

@property (readonly) NSArray *states;
@property (readonly) NSString *type;
@property (readonly) NSString *currentState;
@property (readonly) NSString *nextState;
@property (readonly) NSArray *validPositions;
@property (readonly) NSArray *validDynamicPositions;
@property (readonly) NSDictionary *userInfo;

+ (id)secureFlipBookWithType:(id)a0;

- (BOOL)transitionToState:(id)a0;
- (BOOL)canTransitionToState:(id)a0;
- (BOOL)forceTransitionToState:(id)a0;
- (void)tick:(double)a0;
- (BOOL)validTransitionFromState:(id)a0 toState:(id)a1;

@end
