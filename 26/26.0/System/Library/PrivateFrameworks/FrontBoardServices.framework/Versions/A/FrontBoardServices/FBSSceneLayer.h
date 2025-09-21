@class CAContext, NSString, FBSSceneIdentityToken;

@interface FBSSceneLayer : NSObject {
    CAContext *_context;
    unsigned int _contextID;
    unsigned long long _renderID;
    double _level;
    FBSSceneIdentityToken *_keyboardOwner;
    long long _type;
    long long _alignment;
    NSString *_stringRepresentation;
}

@property (readonly, nonatomic) CAContext *CAContext;
@property (readonly, nonatomic) double level;
@property (readonly, nonatomic) unsigned int contextID;
@property (readonly, nonatomic) unsigned long long renderID;
@property (readonly, nonatomic) FBSSceneIdentityToken *keyboardOwner;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) long long alignment;

- (id)_init;
- (id)stringRepresentation;
- (BOOL)isCAContextLayer;
- (void)dealloc;
- (BOOL)isKeyboardLayer;
- (BOOL)isKindOfClass:(Class)a0;
- (id)initWithKeyboardContext:(id)a0;
- (id)initWithContextID:(unsigned int)a0 renderID:(unsigned long long)a1 level:(double)a2;
- (id)init;
- (id)initWithWindowContext:(id)a0;
- (id)description;
- (id)capture;
- (BOOL)isKeyboardProxyLayer;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithKeyboardOwner:(id)a0 level:(double)a1;

@end
