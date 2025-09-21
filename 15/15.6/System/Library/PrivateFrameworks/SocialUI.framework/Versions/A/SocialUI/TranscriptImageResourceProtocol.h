@interface TranscriptImageResourceProtocol : NSURLProtocol

@property int previousScaleFactor;
@property long long previousMax;

+ (char)canInitWithRequest:(id)a0;
+ (id)canonicalRequestForRequest:(id)a0;
+ (void)shouldRegisterProtocol:(char)a0;
+ (id)transcriptProtocolScheme;

- (void)stopLoading;
- (void)startLoading;
- (id)_templatedImageForURL:(id)a0 inBundle:(id)a1;
- (id)_imageDataForImage:(id)a0;
- (id)_imageNamed:(id)a0 inBundle:(id)a1;
- (char)_isTemplateImage:(id)a0;
- (id)_loadTemplatedImageIfNeededFromURL:(id)a0;
- (id)_requestResourceDataFromURL:(id)a0;
- (id)requestResourceDataFromURL:(id)a0;

@end
