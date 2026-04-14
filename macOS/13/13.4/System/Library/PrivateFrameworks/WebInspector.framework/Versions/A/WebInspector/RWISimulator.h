@class NSString, NSImage, SimDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RWISimulator : RWITarget {
    NSString *_loggingIdentifier;
    NSImage *_icon;
    SimDevice *_simDevice;
    NSString *_simDeviceDomainSocketPath;
    NSObject<OS_dispatch_queue> *_simAccessQueue;
    NSObject<OS_dispatch_source> *_simAccessQueueReadinessTimer;
    long long _deviceClass;
}

@property (readonly, nonatomic) NSString *connectionSocketPath;

- (id)description;
- (void).cxx_destruct;
- (id)displayName;
- (BOOL)isReady;
- (id)icon;
- (id)productVersion;
- (long long)deviceClass;
- (id)buildVersion;
- (BOOL)isIOS;
- (BOOL)isSimulator;
- (void)_startServiceWhenFullyBooted;
- (long long)automationAvailability;
- (id)initWithSimDevice:(id)a0 manager:(id)a1;
- (void)refreshSimDeviceState;
- (BOOL)supportsWebDriver;
- (id)underlyingSimDevice;

@end
