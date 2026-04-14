@class NSString;

@interface NSTouchDevice : NSObject <NSHapticFeedbackPerformer> {
    long long _reserved1;
    double _reserved2;
    long long _flags;
    id _reserved3[3];
    id _lastEndedTouches;
}

@property (readonly) unsigned long long deviceID;
@property (readonly) struct CGSize { double width; double height; } surfaceSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (void)_touchDeviceAdded:(id)a0;
+ (void)_touchDeviceRemoved:(id)a0;
+ (void)_pointerDevicesChanged:(id)a0;
+ (void)_pressureCapabilitiesPrefChanged:(id)a0;
+ (id)_touchDeviceWithIOHIDDictionary:(id)a0;
+ (id)touchDevices;
+ (id)touchDeviceFromDeviceID:(unsigned long long)a0;
+ (id)_touchDeviceFromTrueDeviceID:(unsigned long long)a0;
+ (id)_firstTouchInView:(id)a0 contextID:(long long)a1;
+ (BOOL)_isTouchStillValid:(id)a0;
+ (BOOL)_hasPressureEnabledTouchDevice;
+ (BOOL)_hasForceCapableTouchDevice;

- (void)dealloc;
- (id)init;
- (id)_cancelledTouches;
- (void)performFeedbackPattern:(long long)a0 performanceTime:(unsigned long long)a1;
- (id)_initWithIOHIDDictionary:(id)a0;
- (long long)deviceType;
- (unsigned long long)_trueDeviceID;
- (void)setOverridePressureConfiguration:(id)a0;
- (id)_gestureRecognizersForTouch:(id)a0;
- (void)addGestureRecognizers:(id)a0 forTouch:(id)a1;
- (void)removeGestureRecognizersForTouch:(id)a0;
- (id)_activeTouchGestureRecognizersForContextID:(long long)a0;
- (void)_removeActiveGestureRecognizer:(id)a0 forContextID:(long long)a1;
- (void)_claimTouchesAssociatedWithGestureRecognizer:(id)a0 forContextID:(long long)a1;
- (void)_removeClaimedTouchIdentities:(id)a0 forContextID:(long long)a1;
- (id)_gestureRecognizerClaimedTouchIdentitiesForContextID:(long long)a0;
- (void)_commandeerTouchIdentities:(id)a0 forContextID:(long long)a1;
- (void)_commandeerTouches:(id)a0;
- (id)_commandeeredTouchIdentitiesForContextID:(long long)a0;
- (void)_removeCommandeeredTouchIdentities:(id)a0 forContextID:(long long)a1;
- (void)setTouches:(id)a0 forContextID:(long long)a1;
- (id)_touchingTouchesForContextID:(long long)a0;
- (id)_beginTouchForIdentity:(id)a0 contextId:(long long)a1;
- (id)_cancelledTouchesForContextID:(long long)a0;
- (void)_setLastEndedTouches:(id)a0;
- (id)_lastEndedTouches;
- (void)_cancelActiveTouchGestureRecognizersForContextID:(long long)a0;
- (void)_cancelViewTouchesForContextID:(long long)a0;
- (void)_cancelCommandeeredTouchesForContextId:(long long)a0;
- (void)_cancelTouchesForContextID:(long long)a0 removing:(BOOL)a1;
- (void)_cancelAllTouchesRemoving:(BOOL)a0;
- (void)_commandeerDirectTouches:(id)a0 handler:(id /* block */)a1;
- (void)_flushContextID:(long long)a0;
- (void)_preventFlushingContextID:(long long)a0 during:(id /* block */)a1;
- (id)_deviceInfo;
- (id)_touchingTouches;
- (BOOL)hasActuation;
- (BOOL)supportsForce;

@end
