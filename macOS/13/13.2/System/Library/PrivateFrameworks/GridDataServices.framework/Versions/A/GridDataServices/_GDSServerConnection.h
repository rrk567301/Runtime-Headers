@class NSString, NSDate, NSObject, NSUserDefaults;
@protocol OS_os_log;

@interface _GDSServerConnection : NSObject <NSURLSessionDelegate>

@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (nonatomic) double configVersion;
@property (retain, nonatomic) NSDate *configFetchDate;
@property (retain, nonatomic) NSString *serverURL;
@property (nonatomic) BOOL isCASupported;
@property (nonatomic) BOOL isCECSupported;
@property (retain, nonatomic) NSUserDefaults *defaults;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)platform;
+ (id)dateFromString:(id)a0;
+ (id)dateFormatter;
+ (id)osBuildVersion;
+ (id)dateStringFromDate:(id)a0;
+ (id)queryItemsMetaParams;
+ (id)fetchConfigWithError:(id *)a0;

- (id)init;
- (void).cxx_destruct;
- (void)checkServerConfiguration;
- (void)handleNewConfig:(id)a0;
- (void)loadConfigState;
- (id)postRequestForEndpoint:(id)a0 withData:(id)a1;
- (id)getRequestForEndpoint:(id)a0 withData:(id)a1 keySequence:(id)a2;
- (id)getFakeSecret;
- (id)getFakeSecretVersion;
- (id)dataFromLocation:(id)a0;
- (id)fetchBalancingAuthorityFromLocation:(id)a0;
- (id)fetchBalancingAuthorityPolygons;
- (id)fetchMarginalEmissionForecastFor:(id)a0;
- (id)fetchCarbonIntensityHistoryForBA:(id)a0 from:(id)a1 to:(id)a2;
- (id)fetchEmissionHistoryForBA:(id)a0 from:(id)a1 to:(id)a2;

@end
