@class NSString, NSMutableSet, CWFInterface, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WiFiShim : NSObject {
    CWFInterface *_interface;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL hasAssociation;
@property (nonatomic) BOOL registeredForCallbacks;
@property (retain, nonatomic) NSString *lastSsid;
@property (retain, nonatomic) NSString *lastBssid;
@property (nonatomic) long long lastRSSI;
@property (nonatomic) BOOL debounceTimerFired;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *hasAssociationDebounceTimer;
@property (retain, nonatomic) NSMutableSet *delegates;
@property (nonatomic) BOOL monitorLQMBradycardia;

+ (id)sharedInstance;

- (id)bssid;
- (void)addDelegate:(id)a0;
- (long long)phyMode;
- (void)_monitorAssociationStatus:(BOOL)a0;
- (void)removeDelegate:(id)a0;
- (void)_handleBSSIDChangedEvent;
- (void)_handleWiFiEvent:(id)a0;
- (BOOL)fastLQMUpdates;
- (void)_registerForCallbacks;
- (id)ssid;
- (BOOL)isHotspot;
- (void)dealloc;
- (id)getAWDLPeerList;
- (id)_associationInfoForNetworkProfile:(id)a0;
- (void)_handleLinkChangedEventWithInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)isApplePersonalHotspot;
- (id)refreshAssociationInfo;
- (void)_handleKnownNetworkProfileChangedEventWithInfo:(id)a0;
- (long long)RSSI;
- (void)_handleLinkQualityEventWithInfo:(id)a0;
- (void)_unregisterFromCallbacks;
- (id)init;

@end
