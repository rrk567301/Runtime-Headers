@interface QLPreviewURLProtocol : NSURLProtocol

+ (void)initialize;
+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (id)newUniqueURLWithName:(id)a0;
+ (void)_unregisterURL:(id)a0;
+ (id)_errorForCancel;
+ (void)_dumpPendingProtocols;
+ (id)_errorForAbort;
+ (void)appendData:(id)a0 forURL:(id)a1 lastChunk:(char)a2;
+ (void)cancelLoadingProtocol:(id)a0;
+ (id)errorForURL:(id)a0;
+ (char)isSafeRequest:(id)a0;
+ (char)isSafeURL:(id)a0;
+ (id)mimeTypeForAttachmentURL:(id)a0;
+ (id)newURLWithContentID:(id)a0 baseURL:(id)a1;
+ (id)protocolScheme;
+ (void)registerPreview:(id)a0 forPreviewURL:(id)a1;
+ (void)registerURL:(id)a0 mimeType:(id)a1 textEncoding:(id)a2;
+ (void)setError:(id)a0 forURL:(id)a1;
+ (void)startLoadingProtocol:(id)a0;
+ (void)stopLoadingProtocol:(id)a0;
+ (void)stopLoadingProtocol:(id)a0 isCancel:(char)a1;
+ (void)unregisterURLs:(id)a0 andPreviewURL:(id)a1;

- (void)stopLoading;
- (void)startLoading;

@end
