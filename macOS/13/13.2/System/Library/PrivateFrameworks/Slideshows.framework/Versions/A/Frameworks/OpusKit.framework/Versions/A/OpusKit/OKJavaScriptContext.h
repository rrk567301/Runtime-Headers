@interface OKJavaScriptContext : JSContext

- (void)dealloc;
- (id)init;
- (void)setupActions;
- (void)setupConsole;
- (void)setupExceptionHandler;
- (void)setupNativeStructs;
- (void)setupNativeObjects;
- (void)setupConvenienceMethods;
- (void)setupOpus;
- (void)setupControllers;
- (void)setupWidgets;
- (void)setupContentFilters;
- (void)setupTransitions;

@end
