@class NSDate, NSString, FBKSCampaignError_FrameworkPrivateName;

@interface FBKSCampaignError : NSObject

@property (retain, nonatomic) FBKSCampaignError_FrameworkPrivateName *swiftObject;
@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) long long code;
@property (readonly, nonatomic) NSString *domain;
@property (readonly, nonatomic) NSString *errorDescription;

- (void).cxx_destruct;
- (id)description;
- (id)initWithSwiftObject:(id)a0;

@end
