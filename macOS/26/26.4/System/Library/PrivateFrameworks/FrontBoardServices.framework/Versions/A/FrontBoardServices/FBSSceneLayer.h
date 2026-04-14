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

- (id)capture;
- (id)_init;
- (id)stringRepresentation;
- (BOOL)isKeyboardProxyLayer;
- (BOOL)isCAContextLayer;
- (BOOL)isKeyboardLayer;
- (BOOL)isEqual:(id)a0;
- (BOOL)isKindOfClass:(Class)a0;
- (void).cxx_destruct;
- (id)initWithContextID:(unsigned int)a0 renderID:(unsigned long long)a1 level:(double)a2;
- (unsigned long long)hash;
- (id)init;
- (id)initWithWindowContext:(id)a0;
- (id)initWithKeyboardOwner:(id)a0 level:(double)a1;
- (id)description;
- (void)dealloc;
- (id)initWithKeyboardContext:(id)a0;

@end
