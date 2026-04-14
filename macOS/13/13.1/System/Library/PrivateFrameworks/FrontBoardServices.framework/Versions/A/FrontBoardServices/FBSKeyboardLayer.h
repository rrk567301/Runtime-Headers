@interface FBSKeyboardLayer : FBSSceneLayer

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (long long)alignment;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (id)_succinctDescription;
- (id)initWithTrackingContext:(id)a0;
- (BOOL)isKeyboardLayer;

@end
