@class NSTimer, PKMapContainer;

@interface PKPeerPaymentRecipientCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapAccessLock;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}

+ (id)sharedCache;
+ (id)_instanceName;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handlePurgedNotification:(id)a0;
- (void)_handleDiskMapChangedNotification:(id)a0;
- (id)__init;
- (id)recipientForRecipientAddress:(id)a0;
- (void)cacheRecipient:(id)a0 forRecipientAddress:(id)a1;
- (void)purgeRecipientWithRecipientAddress:(id)a0;
- (BOOL)purgeCache;
- (BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)a0;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)a0;
- (id)_keyForRecipientAddress:(id)a0;
- (BOOL)_canReadMap;
- (BOOL)_canWriteMap;
- (void)_updateMapsFromDisk;
- (void)_locked_setMapNeedsWrite;
- (BOOL)_writeMapToDisk;

@end
