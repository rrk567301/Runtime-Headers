@class NSArray, NSString, NSData, FBKSCampaign_FrameworkPrivateName;

@interface FBKSFeedbackCount_FrameworkPrivateName : NSObject {
    void /* function */ feedbackFiled;
    void /* function */ errors;
}

@property (nonatomic, readonly) NSData *asJSON;
@property (nonatomic, readonly) FBKSCampaign_FrameworkPrivateName *currentCampaign;
@property (nonatomic, readonly) NSArray *feedbackFiled;
@property (nonatomic, readonly) NSArray *errors;
@property (nonatomic, readonly) long long declineCount;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

+ (void)fetchCountsForFormWithIdentifier:(id)a0 completion:(id /* block */)a1;
+ (id)fromJSONWithData:(id)a0;

- (id)init;
- (void).cxx_destruct;

@end
