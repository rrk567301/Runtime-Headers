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

- (void)addDelegate:(id)a0;
- (long long)phyMode;
- (BOOL)isCaptive;
- (id)ssid;
- (id)bssid;
- (BOOL)isOpen;
- (long long)RSSI;
- (void)_handleWiFiEvent:(id)a0;
- (void)removeDelegate:(id)a0;
- (void)_monitorAssociationStatus:(BOOL)a0;
- (id)refreshAssociationInfo;
- (void)_handleKnownNetworkProfileChangedEventWithInfo:(id)a0;
- (BOOL)isApplePersonalHotspot;
- (void).cxx_destruct;
- (void)_handleLinkQualityEventWithInfo:(id)a0;
- (BOOL)isEAP;
- (BOOL)isCarPlay;
- (void)_handleBSSIDChangedEvent;
- (id)init;
- (BOOL)isCarrierBundle;
- (BOOL)fastLQMUpdates;
- (void)_handleLinkChangedEventWithInfo:(id)a0;
- (BOOL)isHotspot;
- (void)_registerForCallbacks;
- (id)getAWDLPeerList;
- (void)dealloc;
- (void)_unregisterFromCallbacks;
- (id)_associationInfoForNetworkProfile:(id)a0;

@end
