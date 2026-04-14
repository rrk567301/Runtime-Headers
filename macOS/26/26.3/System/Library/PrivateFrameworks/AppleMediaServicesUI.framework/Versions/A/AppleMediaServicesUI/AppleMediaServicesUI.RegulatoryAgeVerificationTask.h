@class NSString;

@interface AppleMediaServicesUI.RegulatoryAgeVerificationTask : NSObject <AMSBagConsumer> {
    void /* unknown type, empty encoding */ request;
    void /* unknown type, empty encoding */ metrics;
}

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

+ (id)createBagForSubProfile;

- (id)init;
- (void).cxx_destruct;

@end
