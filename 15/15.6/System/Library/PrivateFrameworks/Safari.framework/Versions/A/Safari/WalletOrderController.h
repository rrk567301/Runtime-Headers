@interface WalletOrderController : NSObject

+ (char)openWalletOrderWithFileURL:(id)a0 mimeType:(id)a1 forDownload:(id)a2 inWindow:(id)a3 error:(id *)a4;
+ (char)canLoadWalletOrders;
+ (char)canOpenURLAsWalletOrder:(id)a0 withMIMEType:(id)a1;
+ (char)isWalletOrderMIMEType:(id)a0;

@end
