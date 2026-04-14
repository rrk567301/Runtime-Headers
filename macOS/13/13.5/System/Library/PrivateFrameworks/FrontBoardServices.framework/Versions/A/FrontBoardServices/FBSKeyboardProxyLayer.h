@class FBSSceneIdentityToken;

@interface FBSKeyboardProxyLayer : FBSSceneLayer

@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;

- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (long long)alignment;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)_succinctDescription;
- (id)initWithLevel:(double)a0 keyboardOwner:(id)a1;
- (BOOL)isKeyboardProxyLayer;

@end
