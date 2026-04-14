@class APMescalSigningRequestor;

@interface APMescalSigning : NSObject

@property (readonly, nonatomic) APMescalSigningRequestor *requesterObject;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)signatureForData:(id)a0;
- (void)signatureForData:(id)a0 completion:(id /* block */)a1;
- (void)signatureForData:(id)a0 waitTime:(double)a1 completion:(id /* block */)a2;

@end
