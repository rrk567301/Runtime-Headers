@class NSNumber;

@interface MTRProductIdentity : NSObject <NSCopying, NSSecureCoding> {
    unsigned short _vendorID;
    unsigned short _productID;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSNumber *vendorID;
@property (readonly, copy, nonatomic) NSNumber *productID;

- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithVendorID:(id)a0 productID:(id)a1;
- (BOOL)isEqual:(id)a0;

@end
