@class NSString, NSMutableDictionary;

@interface PKProvisioningAnalyticsState : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSString *environment;
@property (retain, nonatomic) NSString *intent;
@property (retain, nonatomic) NSString *referralSource;
@property (retain, nonatomic) NSString *campaignAttributionReferrerIdentifier;
@property (nonatomic) long long campaignAttributionProductType;
@property (retain, nonatomic) NSString *productTypeDescriptor;
@property (retain, nonatomic) NSString *productSubtypeDescriptor;
@property (retain, nonatomic) NSMutableDictionary *productMetadata;
@property (retain, nonatomic) NSMutableDictionary *passMetadata;
@property (retain, nonatomic) NSString *productIssuer;
@property (nonatomic) BOOL firstViewAppeared;

- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
