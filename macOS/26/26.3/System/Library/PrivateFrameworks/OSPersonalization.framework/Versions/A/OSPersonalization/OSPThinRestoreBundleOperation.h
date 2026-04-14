@class NSURL;

@interface OSPThinRestoreBundleOperation : OSPOperation

@property (retain) NSURL *thinnedRestoreBundleURL;

- (void)cleanUp;
- (id)description;
- (void)main;
- (void).cxx_destruct;

@end
