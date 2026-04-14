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

- (long long)phyMode;
- (id)ssid;
- (void)_registerForCallbacks;
- (id)getAWDLPeerList;
- (id)_associationInfoForNetworkProfile:(id)a0;
- (void)_handleBSSIDChangedEvent;
- (void)addDelegate:(id)a0;
- (long long)RSSI;
- (BOOL)isHotspot;
- (void)_unregisterFromCallbacks;
- (BOOL)isApplePersonalHotspot;
- (id)bssid;
- (id)refreshAssociationInfo;
- (void)_monitorAssociationStatus:(BOOL)a0;
- (void).cxx_destruct;
- (void)_handleLinkQualityEventWithInfo:(id)a0;
- (void)_handleLinkChangedEventWithInfo:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_handleKnownNetworkProfileChangedEventWithInfo:(id)a0;
- (id)init;
- (BOOL)fastLQMUpdates;
- (void)_handleWiFiEvent:(id)a0;
- (void)dealloc;

@end
