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
- (long long)phyMode;
- (long long)RSSI;
- (id)ssid;
- (void)_handleLinkQualityEventWithInfo:(id)a0;
- (void)_handleBSSIDChangedEvent;
- (BOOL)isHotspot;
- (void)dealloc;
- (void)_unregisterFromCallbacks;
- (void)addDelegate:(id)a0;
- (void)_registerForCallbacks;
- (void)_handleWiFiEvent:(id)a0;
- (void)_handleLinkChangedEventWithInfo:(id)a0;
- (void)_handleKnownNetworkProfileChangedEventWithInfo:(id)a0;
- (id)refreshAssociationInfo;
- (void)removeDelegate:(id)a0;
- (BOOL)isApplePersonalHotspot;
- (id)init;
- (BOOL)fastLQMUpdates;
- (id)_associationInfoForNetworkProfile:(id)a0;
- (void)_monitorAssociationStatus:(BOOL)a0;
- (id)getAWDLPeerList;
- (void).cxx_destruct;

@end
