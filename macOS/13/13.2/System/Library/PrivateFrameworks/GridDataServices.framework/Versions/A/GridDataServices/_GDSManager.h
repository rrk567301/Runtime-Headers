@class NSString, NSDictionary, NSXPCConnection, NSObject;
@protocol OS_os_log;

@interface _GDSManager : NSObject

@property (retain, nonatomic) NSDictionary *currentMarginalForecast;
@property (retain, nonatomic) NSObject<OS_os_log> *log;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSString *clientID;
@property (retain, nonatomic) NSString *locBundlePath;

+ (id)managerWithID:(id)a0 locationBundlePath:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithID:(id)a0 locationBundlePath:(id)a1;
- (void)registerClientID:(id)a0 locationBundlePath:(id)a1;
- (void)triggerBAUpdateWithHandler:(id /* block */)a0;
- (id)latestBalancingAuthority;
- (id)latestEmissionResult;
- (id)latestMarginalEmissionForecast;
- (id)emissionHistoryForBA:(id)a0 from:(id)a1 to:(id)a2;
- (id)carbonIntensityHistoryForBA:(id)a0 from:(id)a1 to:(id)a2;
- (void)fixMarginalEmissionForecast:(id)a0;
- (void)unFixMarginalEmissionForecast;
- (void)setFakeSecret:(id)a0;
- (void)unSetFakeSecret;
- (void)setFakeSecretVersion:(id)a0;
- (void)unSetFakeSecretVersion;
- (id)getFakeMarginalEmissionForecast;

@end
