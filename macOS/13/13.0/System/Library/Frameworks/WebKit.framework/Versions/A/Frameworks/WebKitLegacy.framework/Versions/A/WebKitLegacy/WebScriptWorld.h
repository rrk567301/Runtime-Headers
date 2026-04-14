@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate *_private;
}

+ (id)world;
+ (id)standardWorld;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { } *)a0;
+ (id)scriptWorldForJavaScriptContext:(id)a0;
+ (id)findOrCreateWorld:(void *)a0;

- (void)dealloc;
- (id)init;
- (id)initWithWorld:(void *)a0;
- (void)unregisterWorld;

@end
