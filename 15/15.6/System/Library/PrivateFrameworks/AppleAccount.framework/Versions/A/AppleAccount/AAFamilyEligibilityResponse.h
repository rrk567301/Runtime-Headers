@class NSArray, NSString;

@interface AAFamilyEligibilityResponse : AAResponse

@property (readonly, nonatomic) char eligible;
@property (readonly, nonatomic) long long eligibilityStatus;
@property (readonly, nonatomic) char hasPendingInvites;
@property (readonly, nonatomic) NSArray *familyFeaturePrimaryDescriptions;
@property (readonly, nonatomic) NSArray *familyFeatureSecondaryDescriptions;
@property (readonly, nonatomic) NSString *familyFeatureSecondaryTitle;
@property (readonly, nonatomic) NSString *underageEligibilityAlertTitle;
@property (readonly, nonatomic) NSString *underageEligibilityAlertMessage;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)a0 data:(id)a1;

@end
