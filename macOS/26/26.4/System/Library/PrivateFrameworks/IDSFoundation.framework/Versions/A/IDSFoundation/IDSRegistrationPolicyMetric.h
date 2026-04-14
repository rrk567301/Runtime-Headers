@class NSDictionary, NSString;

@interface IDSRegistrationPolicyMetric : NSObject <CUTCoreAnalyticsMetric>

@property (readonly, nonatomic) long long expectedConfig;
@property (readonly, nonatomic) long long registeringConfig;
@property (nonatomic) long long actualConfig;
@property (readonly, nonatomic) long long iCloudUserIndex;
@property (readonly, nonatomic) long long iMessageUserIndex;
@property (readonly, nonatomic) long long faceTimeUserIndex;
@property (readonly, nonatomic) long long gameCenterUserIndex;
@property (readonly, nonatomic) long long iTunesUserIndex;
@property (readonly, nonatomic) BOOL hasPhoneMadridAccount;
@property (readonly, nonatomic) BOOL phoneMadridAccountEnabled;
@property (readonly, nonatomic) BOOL ktOptedIn;
@property (readonly, nonatomic) BOOL ktPolicyApplied;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithExpectedConfig:(long long)a0 registeringConfig:(long long)a1 iCloudUserIndex:(long long)a2 iMessageUserIndex:(long long)a3 faceTimeUserIndex:(long long)a4 gameCenterUserIndex:(long long)a5 iTunesUserIndex:(long long)a6 hasPhoneMadridAccount:(BOOL)a7 phoneMadridAccountEnabled:(BOOL)a8 ktOptedIn:(BOOL)a9 ktPolicyApplied:(BOOL)a10;

@end
