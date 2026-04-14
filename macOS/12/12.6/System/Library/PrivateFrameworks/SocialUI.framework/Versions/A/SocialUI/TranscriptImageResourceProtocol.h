@interface TranscriptImageResourceProtocol : NSURLProtocol

@property int previousScaleFactor;
@property long long previousMax;

+ (BOOL)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (id)transcriptProtocolScheme;
+ (void)shouldRegisterProtocol:(BOOL)a0;

- (void)stopLoading;
- (void)startLoading;
- (id)requestResourceDataFromURL:(id)a0;
- (id)_requestResourceDataFromURL:(id)a0;
- (BOOL)_isTemplateImage:(id)a0;
- (id)_templatedImageForURL:(id)a0 inBundle:(id)a1;
- (id)_imageDataForImage:(id)a0;
- (id)_loadTemplatedImageIfNeededFromURL:(id)a0;
- (id)_imageNamed:(id)a0 inBundle:(id)a1;

@end
