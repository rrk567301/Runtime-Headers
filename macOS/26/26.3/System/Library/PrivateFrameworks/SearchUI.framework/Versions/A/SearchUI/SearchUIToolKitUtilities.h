@class NSString, NSImage, NSData, SFAppEntityAnnotation;

@interface SearchUIToolKitUtilities : NSObject

+ (void)executeToolInvocationFromData:(id)a0 completionHandler:(id /* block */)a1;
+ (void)loadIconFromData:(NSData *)a0 size:(struct CGSize { double x0; double x1; })a1 completionHandler:(void (^)(NSImage *))a2;
+ (void)performOpenIntentForAnnotation:(SFAppEntityAnnotation *)a0 bundleId:(NSString *)a1 completionHandler:(void (^)(BOOL))a2;

- (id)init;
- (void).cxx_destruct;

@end
