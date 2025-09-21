@interface TranscriptImageResourceProtocol : NSURLProtocol

@property int previousScaleFactor;
@property long long previousMax;

+ (id)canonicalRequestForRequest:(id)a0;
+ (BOOL)canInitWithRequest:(id)a0;
+ (void)shouldRegisterProtocol:(BOOL)a0;
+ (id)transcriptProtocolScheme;

- (void)startLoading;
- (void)stopLoading;
- (id)_templatedImageForURL:(id)a0 inBundle:(id)a1;
- (id)_imageDataForImage:(id)a0;
- (id)_imageNamed:(id)a0 inBundle:(id)a1;
- (BOOL)_isTemplateImage:(id)a0;
- (id)_loadTemplatedImageIfNeededFromURL:(id)a0;
- (id)_requestResourceDataFromURL:(id)a0;
- (id)requestResourceDataFromURL:(id)a0;

@end
