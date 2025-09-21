@class NSURL;

@interface OSPThinRestoreBundleOperation : OSPOperation

@property (retain) NSURL *thinnedRestoreBundleURL;

- (void)cleanUp;
- (void)main;
- (id)description;
- (void).cxx_destruct;

@end
