@class NSString;

@interface TPSAnalyticsEventSharedTipDisplayed : TPSAnalyticsEvent

@property (retain, nonatomic) NSString *tipID;
@property (copy, nonatomic) NSString *correlationID;
@property (copy, nonatomic) NSString *collectionID;
@property (copy, nonatomic) NSString *variantID;
@property (copy, nonatomic) NSString *eligibility;
@property (copy, nonatomic) NSString *message;

+ (BOOL)supportsSecureCoding;
+ (id)eventWithTipID:(id)a0 correlationID:(id)a1 collectionID:(id)a2 variantID:(id)a3 message:(id)a4 isEligible:(BOOL)a5;
+ (id)eventWithTipID:(id)a0 invalidVariantID:(id)a1;

- (id)mutableAnalyticsEventRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)eventName;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_initWithTipID:(id)a0 correlationID:(id)a1 collectionID:(id)a2 variantID:(id)a3 eligibility:(id)a4 message:(id)a5;

@end
