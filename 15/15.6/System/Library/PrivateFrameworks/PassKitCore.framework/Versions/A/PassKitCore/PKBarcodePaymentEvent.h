@class NSString, NSData, NSDate;

@interface PKBarcodePaymentEvent : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long version;
@property (copy, nonatomic) NSDate *timestamp;
@property (nonatomic) unsigned long long eventType;
@property (copy, nonatomic) NSString *barcodeIdentifier;
@property (nonatomic) char biometricsChanged;
@property (nonatomic) long long authenticationType;
@property (copy, nonatomic) NSString *deviceAccountIdentifier;
@property (copy, nonatomic) NSData *eventMetadata;

- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isEqualToBarcodePaymentEvent:(id)a0;

@end
