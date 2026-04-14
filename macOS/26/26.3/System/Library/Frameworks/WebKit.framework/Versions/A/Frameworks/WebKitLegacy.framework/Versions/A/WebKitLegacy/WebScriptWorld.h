@class WebScriptWorldPrivate;

@interface WebScriptWorld : NSObject {
    WebScriptWorldPrivate *_private;
}

+ (id)findOrCreateWorld:(void *)a0;
+ (id)scriptWorldForGlobalContext:(struct OpaqueJSContext { } *)a0;
+ (id)scriptWorldForJavaScriptContext:(id)a0;
+ (id)standardWorld;
+ (id)world;

- (id)init;
- (void)dealloc;
- (void)unregisterWorld;
- (id)initWithWorld:(void *)a0;

@end
