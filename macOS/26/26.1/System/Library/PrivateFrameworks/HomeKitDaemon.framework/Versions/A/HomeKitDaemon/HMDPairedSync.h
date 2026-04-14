@interface HMDPairedSync : HMFObject

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)syncPartiallyComplete;
- (void)needToSync;
- (void)syncComplete;

@end
