@class NSArray, NEConfigurationManager, NSObject;
@protocol OS_dispatch_queue, NEVPNConnectivityManagerDelegate;

@interface NEVPNConnectivityManager : NSObject <NEVPNConnectivitySessionDelegate> {
    NEConfigurationManager *_configManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sessions;
}

@property (nonatomic) unsigned long long visibilityStyle;
@property (nonatomic) unsigned long long connectivityState;
@property (nonatomic) char hasRelayConfigurations;
@property (nonatomic) char usesPolicyBasedRouting;
@property (weak) id<NEVPNConnectivityManagerDelegate> delegate;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)a0;
- (void)sessionStatusDidChange:(id)a0;
- (id)toggleVPNConnectivity:(char)a0;

@end
