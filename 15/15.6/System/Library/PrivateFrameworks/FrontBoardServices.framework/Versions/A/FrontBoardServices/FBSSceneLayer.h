@class CAContext, NSString, FBSSceneIdentityToken;

@interface FBSSceneLayer : NSObject {
    CAContext *_context;
    unsigned int _contextID;
    double _level;
    FBSSceneIdentityToken *_keyboardOwner;
    long long _type;
    long long _alignment;
    NSString *_stringRepresentation;
}

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long alignment;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (char)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)stringRepresentation;
- (id)capture;
- (char)isKeyboardLayer;
- (id)initWithContextID:(unsigned int)a0 level:(double)a1;
- (id)initWithKeyboardContext:(id)a0;
- (id)initWithKeyboardOwner:(id)a0 level:(double)a1;
- (id)initWithWindowContext:(id)a0;
- (char)isCAContextLayer;
- (char)isKeyboardProxyLayer;

@end
