@interface GKServerWebViewJSExternalAccounts : NSObject

+ (BOOL)isSelectorExcludedFromWebScript:(SEL)a0;
+ (id)webScriptNameForSelector:(SEL)a0;

- (void)queryAvailableServicesWithCallback:(id)a0;
- (void)link:(id)a0 withCallback:(id)a1;
- (void)unlink:(id)a0 withCallback:(id)a1;
- (void)change:(id)a0 toLinkState:(BOOL)a1 withCallback:(id)a2;

@end
