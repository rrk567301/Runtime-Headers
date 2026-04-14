@interface HMDPairedSync : HMFObject

- (void)syncPartiallyComplete;
- (void)needToSync;
- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)syncComplete;

@end
