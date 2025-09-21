@class NSString;

@interface AMSPSD2EventTask : NSObject <AMSBagConsumer>

@property (class, nonatomic, readonly) NSString *bagSubProfile;
@property (class, nonatomic, readonly) NSString *bagSubProfileVersion;

+ (id)createBagForSubProfile;
+ (void)sendCUIBootstrapEventWithURL:(id)a0 error:(id)a1;
+ (void)sendCUICallbackEventWithResolveData:(id)a0;
+ (char)sendInitialPSD2EventWithAction:(id)a0 bag:(id)a1 originalResponse:(id)a2;
+ (void)sendRetryResultPSD2EventWithAction:(id)a0 result:(id)a1 error:(id)a2 bag:(id)a3;

- (id)init;
- (void).cxx_destruct;

@end
