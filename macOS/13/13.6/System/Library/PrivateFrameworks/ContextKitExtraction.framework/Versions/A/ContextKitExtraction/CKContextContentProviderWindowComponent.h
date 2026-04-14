@class NSWindow;

@interface CKContextContentProviderWindowComponent : CKContextContentProvider

@property (weak, nonatomic, setter=setWindow:) NSWindow *window;

+ (id)_bestVisibleStringForView:(id)a0 usingExecutor:(id)a1;
+ (void)_descendantsRelevantForContentExtractionFromView:(id)a0 intoArray:(id)a1;
+ (id)_descendantsRelevantForContentExtractionFromWindow:(id)a0;
+ (void)_donateContentsOfWindow:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;
+ (void)_donateText:(id)a0 withTitle:(id)a1 withDebugText:(id)a2 debugUrlString:(id)a3 usingContextFromExecutor:(id)a4;
+ (void)_extractContentFromWebView:(id)a0 withCompletionHandler:(id /* block */)a1;
+ (id)_handleWKWebView:(id)a0 withExecutor:(id)a1;
+ (BOOL)_isRelevantForExtractionWithView:(id)a0;
+ (void)extractFromWindow:(id)a0 usingExecutor:(id)a1 withOptions:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;
- (void)extractUsingExecutor:(id)a0;
- (void)extractUsingExecutor:(id)a0 withOptions:(unsigned long long)a1;

@end
