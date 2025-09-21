@class NSString, NSMutableSet, CWFInterface, NSObject;
@protocol OS_dispatch_queue;

@interface WiFiShim : NSObject {
    CWFInterface *_interface;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) char hasAssociation;
@property (nonatomic) char registeredForCallbacks;
@property (retain, nonatomic) NSString *lastSsid;
@property (retain, nonatomic) NSString *lastBssid;
@property (nonatomic) long long lastRSSI;
@property (retain, nonatomic) NSMutableSet *delegates;
@property (nonatomic) char monitorLQMBradycardia;

+ (id)sharedInstance;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)removeDelegate:(id)a0;
- (void)addDelegate:(id)a0;
- (long long)RSSI;
- (long long)phyMode;
- (id)bssid;
- (id)ssid;
- (char)isHotspot;
- (char)isApplePersonalHotspot;
- (void)_handleWiFiEvent:(id)a0;
- (id)getAWDLPeerList;
- (id)_associationInfoForNetworkProfile:(id)a0;
- (void)_handleBSSIDChangedEvent;
- (void)_handleKnownNetworkProfileChangedEventWithInfo:(id)a0;
- (void)_handleLinkChangedEventWithInfo:(id)a0;
- (void)_handleLinkQualityEventWithInfo:(id)a0;
- (void)_registerForCallbacks;
- (void)_unregisterFromCallbacks;
- (char)fastLQMUpdates;
- (id)refreshAssociationInfo;

@end
