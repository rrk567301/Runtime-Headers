@interface FCMockURLProtocol : NSURLProtocol

+ (id)URLForData:(id)a0 mimeType:(id)a1;
+ (id)URLForData:(id)a0 mimeType:(id)a1 statusCode:(unsigned long long)a2;
+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (BOOL)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (id)URLForError:(id)a0;

- (void)startLoading;
- (void)stopLoading;

@end
