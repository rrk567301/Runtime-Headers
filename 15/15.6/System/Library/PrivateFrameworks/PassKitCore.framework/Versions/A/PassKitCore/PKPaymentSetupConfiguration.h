@class NSURL, NSString, NSArray;

@interface PKPaymentSetupConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSURL *originatingURL;
@property (copy, nonatomic) NSString *merchantIdentifier;
@property (copy, nonatomic) NSArray *signedFields;
@property (copy, nonatomic) NSString *signature;
@property (copy, nonatomic) NSString *referrerIdentifier;
@property (nonatomic) char usePaymentSetupFeaturesFromCDN;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
