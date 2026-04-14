@class NSURL;

@interface OSPThinRestoreBundleOperation : OSPOperation

@property (retain) NSURL *thinnedRestoreBundleURL;

- (void)main;
- (id)description;
- (void)cleanUp;
- (void).cxx_destruct;

@end
