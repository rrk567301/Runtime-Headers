@class NSMutableSet;

@interface WiFiShim : NSObject <CWEventDelegate> {
    BOOL _registeredForCallbacks;
}

@property (retain, nonatomic) NSMutableSet *delegates;
@property (readonly) BOOL awdlLinkUp;
@property (nonatomic) BOOL monitorLQMBradycardia;
@property (readonly) BOOL hasAssociation;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)addDelegate:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)bssidDidChangeForWiFiInterfaceWithName:(id)a0;
- (void)linkQualityDidChangeForWiFiInterfaceWithName:(id)a0 rssi:(long long)a1 transmitRate:(double)a2;
- (void)_setAWDLLinkUp:(BOOL)a0;
- (id)ssidForInterfaceWithName:(id)a0;
- (id)bssidForInterfaceWithName:(id)a0;
- (BOOL)isHotSpotOnInterfaceWithName:(id)a0;
- (id)refreshAssociationInfo;
- (long long)phyModeForInterfaceWithName:(id)a0;
- (BOOL)toggleLQMIntervalOn:(id)a0 toFast:(BOOL)a1;
- (void)registerForCallbacks;
- (void)unregisterForCallbacks;
- (id)getAWDLPeerList;

@end
