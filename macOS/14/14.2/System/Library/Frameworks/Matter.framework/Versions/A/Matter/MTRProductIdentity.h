@class NSNumber;

@interface MTRProductIdentity : NSObject

@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;

- (void).cxx_destruct;
- (id)initWithVendorID:(id)a0 productID:(id)a1;

@end
