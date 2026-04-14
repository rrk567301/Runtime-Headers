@interface FBSKeyboardLayer : FBSSceneLayer

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (long long)alignment;
- (BOOL)isKeyboardLayer;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (id)_succinctDescription;
- (id)initWithTrackingContext:(id)a0;

@end
