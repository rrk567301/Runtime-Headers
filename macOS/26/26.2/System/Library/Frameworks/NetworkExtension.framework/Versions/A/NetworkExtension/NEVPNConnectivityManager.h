@class NSArray, NEConfigurationManager, NSObject;
@protocol OS_dispatch_queue, NEVPNConnectivityManagerDelegate;

@interface NEVPNConnectivityManager : NSObject <NEVPNConnectivitySessionDelegate> {
    NEConfigurationManager *_configManager;
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_sessions;
}

@property (nonatomic) unsigned long long visibilityStyle;
@property (nonatomic) unsigned long long connectivityState;
@property (nonatomic) BOOL hasRelayConfigurations;
@property (nonatomic) BOOL usesPolicyBasedRouting;
@property (weak) id<NEVPNConnectivityManagerDelegate> delegate;

- (void)sessionStatusDidChange:(id)a0;
- (void).cxx_destruct;
- (id)toggleVPNConnectivity:(BOOL)a0;
- (id)initWithDelegate:(id)a0;
- (void)dealloc;

@end
