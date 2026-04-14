@class NSString, NSImage, SimDevice, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface RWISimulator : RWITarget {
    NSString *_loggingIdentifier;
    NSImage *_icon;
    NSImage *_symbolImage;
    SimDevice *_simDevice;
    NSString *_simDeviceDomainSocketPath;
    NSObject<OS_dispatch_queue> *_simAccessQueue;
    NSObject<OS_dispatch_source> *_simAccessQueueReadinessTimer;
    long long _deviceClass;
}

@property (readonly, nonatomic) NSString *connectionSocketPath;

- (long long)deviceClass;
- (id)productVersion;
- (BOOL)isSimulator;
- (BOOL)isReady;
- (id)displayName;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)buildVersion;
- (id)icon;
- (BOOL)isIOS;
- (id)description;
- (void).cxx_destruct;
- (id)symbolImage;
- (BOOL)isBooted;
- (BOOL)isCapable;
- (void)_openURLAssumingBooted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startServiceWhenFullyBooted;
- (long long)automationAvailability;
- (id)initWithSimDevice:(id)a0 manager:(id)a1;
- (void)refreshSimDeviceState;
- (BOOL)supportsWebDriver;
- (id)underlyingSimDevice;

@end
