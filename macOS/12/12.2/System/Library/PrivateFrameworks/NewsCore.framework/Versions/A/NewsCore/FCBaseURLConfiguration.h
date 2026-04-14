@protocol FCCoreConfiguration;

@interface FCBaseURLConfiguration : NSObject

@property (retain, nonatomic) id<FCCoreConfiguration> coreConfiguration;

+ (id)fairPlayBaseURLForConfiguration:(id)a0;
+ (id)CAPIBaseURLForConfiguration:(id)a0;
+ (id)notificationsBaseURLForConfiguration:(id)a0;
+ (id)newsletterBaseURLForConfiguration:(id)a0;
+ (id)overrideCAPIURLString;
+ (id)searchBaseURLForConfiguration:(id)a0;
+ (BOOL)hasOverrideCAPIURL;

- (void).cxx_destruct;
- (id)initWithCoreConfiguration:(id)a0;
- (id)fairPlayBaseURL;
- (id)notificationsBaseURL;
- (id)newsletterBaseURL;
- (id)CAPIBaseURL;
- (id)searchBaseURLForConfiguration;
- (id)baseURL:(id /* block */)a0 fallback:(void /* function */ *)a1;
- (id)baseURLString:(id /* block */)a0 fallback:(void /* function */ *)a1;

@end
