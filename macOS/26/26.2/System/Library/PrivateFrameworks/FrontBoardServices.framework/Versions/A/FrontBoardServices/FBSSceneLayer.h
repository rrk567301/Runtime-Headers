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

- (BOOL)isKeyboardLayer;
- (BOOL)isCAContextLayer;
- (BOOL)isKeyboardProxyLayer;
- (id)capture;
- (id)initWithKeyboardContext:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)stringRepresentation;
- (BOOL)isKindOfClass:(Class)a0;
- (id)_init;
- (void).cxx_destruct;
- (id)initWithWindowContext:(id)a0;
- (id)description;
- (id)initWithContextID:(unsigned int)a0 renderID:(unsigned long long)a1 level:(double)a2;
- (id)initWithKeyboardOwner:(id)a0 level:(double)a1;
- (id)init;
- (void)dealloc;

@end
