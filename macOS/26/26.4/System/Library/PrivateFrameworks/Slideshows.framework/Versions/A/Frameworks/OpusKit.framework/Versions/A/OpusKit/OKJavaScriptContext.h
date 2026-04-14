@interface OKJavaScriptContext : JSContext

- (id)init;
- (void)dealloc;
- (void)setupActions;
- (void)setupConsole;
- (void)setupContentFilters;
- (void)setupControllers;
- (void)setupConvenienceMethods;
- (void)setupExceptionHandler;
- (void)setupNativeObjects;
- (void)setupNativeStructs;
- (void)setupOpus;
- (void)setupTransitions;
- (void)setupWidgets;

@end
