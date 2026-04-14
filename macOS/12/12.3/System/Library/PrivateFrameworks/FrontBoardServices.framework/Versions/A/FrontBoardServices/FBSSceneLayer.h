@class CAContext, NSString;

@interface FBSSceneLayer : NSObject <BSXPCCoding> {
    double _level;
}

@property (readonly, nonatomic, getter=_context) CAContext *context;
@property (readonly, nonatomic) long long alignment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (void)_unsafe_captureLevel;
- (double)_unsafe_level;
- (id)_initWithCAContext:(id)a0 fallbackLevel:(double)a1;
- (id)_succinctDescription;
- (BOOL)isCAContextLayer;
- (BOOL)isKeyboardProxyLayer;
- (BOOL)isExternalSceneLayer;
- (BOOL)isKeyboardLayer;

@end
