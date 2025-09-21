@class NSString;

@interface IFDJavaScriptEngine : NSObject {
    struct OpaqueJSContext { } *_ctx;
    NSString *_script;
}

- (void)dealloc;
- (id)init;
- (void)setDocument:(id)a0;
- (void)setSearchContext:(id)a0;
- (void)setTargetDelegate:(id)a0;
- (void)setChoicesDelegate:(id)a0;
- (void)setCurrentBundle:(struct __CFBundle { } *)a0;
- (void)setDistributionScriptsPath:(id)a0;
- (void *)callJSFunction:(id)a0;
- (void *)callJSFunction:(id)a0 storingResultsIn:(id)a1;
- (char)initRuntime;
- (id)initWithScript:(id)a0 allowInsecure:(char)a1;
- (void)setCurrentChoiceID:(id)a0;
- (void)setTargetContentsIgnored:(char)a0;

@end
