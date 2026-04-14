@class NSString, NSObject, SimDevice;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RWISimulator : RWITarget {
    NSString *_loggingIdentifier;
    SimDevice *_simDevice;
    NSString *_simDeviceDomainSocketPath;
    NSObject<OS_dispatch_queue> *_simAccessQueue;
    NSObject<OS_dispatch_source> *_simAccessQueueReadinessTimer;
}

@property (readonly, nonatomic) BOOL usesLegacyTCPPort;
@property (readonly, nonatomic) unsigned short legacyTCPPort;
@property (readonly, nonatomic) NSString *connectionSocketPath;
@property (readonly, nonatomic) long long deviceClass;

- (id)description;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)isReady;
- (id)productVersion;
- (id)buildVersion;
- (BOOL)isIOS;
- (BOOL)isSimulator;
- (BOOL)supportsAutomaticInspection;
- (long long)automationAvailability;
- (BOOL)supportsWebDriver;
- (void)refreshSimDeviceState;
- (id)initWithSimDevice:(id)a0 manager:(id)a1;
- (void)_startServiceWhenFullyBooted;
- (id)underlyingSimDevice;

@end
