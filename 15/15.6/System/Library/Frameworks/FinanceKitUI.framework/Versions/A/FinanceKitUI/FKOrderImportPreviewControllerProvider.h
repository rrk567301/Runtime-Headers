@interface FKOrderImportPreviewControllerProvider : NSObject

+ (id)makeViewControllerWithOrderURL:(id)a0 completion:(id /* block */)a1 error:(id *)a2;
+ (char)canProvidePreviewControllerForMessages;
+ (id)makeViewControllerWithOrderData:(id)a0 completion:(id /* block */)a1 error:(id *)a2;

@end
