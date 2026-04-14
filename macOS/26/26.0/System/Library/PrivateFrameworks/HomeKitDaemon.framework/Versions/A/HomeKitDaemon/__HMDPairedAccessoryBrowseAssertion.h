@class HMDAccessoryBrowser;

@interface __HMDPairedAccessoryBrowseAssertion : HMFAssertion

@property (readonly, weak) HMDAccessoryBrowser *accessoryBrowser;

- (void)invalidate;
- (id)initWithName:(id)a0;
- (id)initWithAccessoryBrowser:(id)a0 reason:(id)a1;
- (void).cxx_destruct;

@end
