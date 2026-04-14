@class NSString, NSDictionary;

@interface AMSUIRegulatoryAgeVerificationTask : NSObject <AMSBagConsumer> {
    void /* unknown type, empty encoding */ request;
    void /* function */ userInfo;
}

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

@property (nonatomic, copy) NSDictionary *userInfo;

+ (id)createBagForSubProfile;

- (id)perform;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAccount:(id)a0 viewController:(id)a1 bag:(id)a2;
- (id)initWithAccountParameters:(id)a0 viewController:(id)a1 bag:(id)a2;

@end
