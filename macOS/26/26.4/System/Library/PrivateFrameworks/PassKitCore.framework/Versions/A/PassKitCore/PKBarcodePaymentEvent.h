@class NSString, NSData, NSDate;

@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *barcodeIdentifier;
@property (nonatomic) BOOL biometricsChanged;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSData *eventMetadata;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)data;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToBarcodePaymentEvent:(id)a0;

@end
