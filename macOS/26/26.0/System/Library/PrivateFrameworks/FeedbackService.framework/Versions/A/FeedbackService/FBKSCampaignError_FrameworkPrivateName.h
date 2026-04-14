@class NSString, NSDate;

@interface FBKSCampaignError_FrameworkPrivateName : NSObject {
    void /* unknown type, empty encoding */ date;
    void /* function */ domain;
    void /* function */ errorDescription;
}

@property (nonatomic, readonly) NSDate *date;
@property (nonatomic, readonly) long long code;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *errorDescription;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
