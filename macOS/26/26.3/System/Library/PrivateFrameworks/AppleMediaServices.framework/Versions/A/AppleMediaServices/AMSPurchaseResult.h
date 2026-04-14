@class NSString, NSDictionary, AMSPurchase, NSError, NSURLResponse;

@interface AMSPurchaseResult : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *correlationID;
@property (copy) NSError *error;
@property (copy) NSDictionary *loadURLEventDictionary;
@property (copy) AMSPurchase *purchase;
@property (copy) NSDictionary *responseDictionary;
@property (copy) NSURLResponse *URLResponse;
@property (retain) NSDictionary *finalizedBlindedData;
@property BOOL didShowPaymentSheet;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToPurchaseResult:(id)a0;

@end
