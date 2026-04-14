@interface INCWidgetIntentProvider : NSObject

+ (void)initialize;

- (id)intentsExtensionForExtension:(id)a0 compatibleWithIntent:(id)a1 error:(id *)a2;
- (void)provideIntentWithOptions:(id)a0 completionHandler:(id /* block */)a1;

@end
