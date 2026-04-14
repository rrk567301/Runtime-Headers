@interface HMDPairedSync : HMFObject

- (id)initWithDelegate:(id)a0 queue:(id)a1;
- (void)needToSync;
- (void)syncPartiallyComplete;
- (void)syncComplete;

@end
