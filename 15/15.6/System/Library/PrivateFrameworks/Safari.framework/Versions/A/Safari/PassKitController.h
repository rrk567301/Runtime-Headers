@interface PassKitController : NSObject

+ (char)isPassMIMEType:(id)a0;
+ (id)_passesWithFileURL:(id)a0 mimeType:(id)a1 error:(id *)a2;
+ (char)canLoadPassKit;
+ (char)canOpenURLAsPass:(id)a0 withMIMEType:(id)a1;
+ (char)isPassesMIMEType:(id)a0;
+ (char)openPassWithFileURL:(id)a0 mimeType:(id)a1 forDownload:(id)a2 inWindow:(id)a3 error:(id *)a4;

@end
