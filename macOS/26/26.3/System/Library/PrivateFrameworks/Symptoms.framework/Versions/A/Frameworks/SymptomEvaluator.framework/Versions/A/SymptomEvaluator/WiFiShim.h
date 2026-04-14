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
- (void)addDelegate:(id)a0;
- (void)_handleBSSIDChangedEvent;
- (void)_handleWiFiEvent:(id)a0;
- (id)bssid;
- (id)ssid;
- (long long)RSSI;
- (BOOL)fastLQMUpdates;
- (id)init;
- (BOOL)isApplePersonalHotspot;
- (void)_registerForCallbacks;
- (void)_handleLinkChangedEventWithInfo:(id)a0;
- (BOOL)isHotspot;
- (id)getAWDLPeerList;
- (id)refreshAssociationInfo;
- (void)_monitorAssociationStatus:(BOOL)a0;
- (void).cxx_destruct;
- (id)_associationInfoForNetworkProfile:(id)a0;
- (void)_unregisterFromCallbacks;
- (void)dealloc;
- (void)_handleKnownNetworkProfileChangedEventWithInfo:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_handleLinkQualityEventWithInfo:(id)a0;

@end
