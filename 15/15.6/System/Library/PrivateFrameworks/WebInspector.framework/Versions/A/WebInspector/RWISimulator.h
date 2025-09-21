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

- (id)description;
- (void).cxx_destruct;
- (id)displayName;
- (char)isReady;
- (void)openURL:(id)a0 completionHandler:(id /* block */)a1;
- (id)icon;
- (id)productVersion;
- (long long)deviceClass;
- (id)buildVersion;
- (char)isSimulator;
- (id)symbolImage;
- (char)isIOS;
- (char)isBooted;
- (char)isCapable;
- (void)_openURLAssumingBooted:(id)a0 completionHandler:(id /* block */)a1;
- (void)_startServiceWhenFullyBooted;
- (long long)automationAvailability;
- (id)initWithSimDevice:(id)a0 manager:(id)a1;
- (void)refreshSimDeviceState;
- (char)supportsWebDriver;
- (id)underlyingSimDevice;

@end
