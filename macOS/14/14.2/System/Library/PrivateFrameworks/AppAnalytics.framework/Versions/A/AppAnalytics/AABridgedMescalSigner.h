@class AMSBag;

@interface AABridgedMescalSigner : NSObject

@property (retain, nonatomic) AMSBag *bag;

- (id)init;
- (void).cxx_destruct;
- (id)signatureWithData:(id)a0 error:(id *)a1;

@end
