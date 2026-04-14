@class NSString, AMSPurchase, NSDictionary, NSError, NSURLResponse;

@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *correlationID;
@property (copy) NSError *error;
@property (copy) AMSPurchase *purchase;
@property (copy) NSDictionary *responseDictionary;
@property (copy) NSURLResponse *URLResponse;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToPurchaseResult:(id)a0;

@end
