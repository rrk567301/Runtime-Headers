@interface FCMockURLProtocol : NSURLProtocol

+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (char)requestIsCacheEquivalent:(id)a0 toRequest:(id)a1;
+ (id)URLForData:(id)a0 mimeType:(id)a1 statusCode:(unsigned long long)a2;
+ (id)URLForData:(id)a0 mimeType:(id)a1;
+ (id)URLForError:(id)a0;

- (void)stopLoading;
- (void)startLoading;

@end
