@class NSDictionary, NSData, GEOUserSessionEntity, GEOAPSessionData, NSObject;
@protocol OS_dispatch_queue;

@interface GEOUserSession : NSObject {
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _shortSessionID;
    double _shortSessionStartTime;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _shortNavSessionLock;
    BOOL _shortNavSessionNeedsInit;
    int _shortSessionChangedToken;
    NSDictionary *_shortSessionByAppID;
    id _shortSessionListener;
    NSData *_navigationDirectionsID;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _navigationSessionID;
    double _navigationSessionStartTime;
    NSData *_previousNavigationDirectionsID;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _previousNavigationSessionID;
    double _previousNavigationSessionStartTime;
    double _previousNavigationSessionEndTime;
    double _shortSessionCreateHour;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _fifteenMoDeviceSessionLock;
    GEOAPSessionData *_fifteenMoDeviceSessionData;
    struct GEOSessionID { unsigned long long _high; unsigned long long _low; } _zeroSessionID;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _locIntelSessionLock;
    BOOL _locIntelNeedsInit;
    GEOAPSessionData *_locIntelSessionData;
    id _locIntelSessionListener;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property (class, nonatomic) BOOL initialShareSessionWithMaps;

@property (readonly, nonatomic, getter=_sharedSessionDataByAppId) NSDictionary *sharedSessionData;
@property (nonatomic) BOOL shareSessionWithMaps;
@property (copy, nonatomic) GEOUserSessionEntity *mapsUserSessionEntity;
@property (copy, nonatomic) GEOUserSessionEntity *mapsShortSession;
@property (readonly, nonatomic) struct GEOSessionID { unsigned long long x0; unsigned long long x1; } navSessionID;

+ (id)sharedInstance;
+ (id)lowBytesStringFromSession:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0;
+ (id)highBytesStringFromSession:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0;
+ (id)mapsUnifiedBundleId;
+ (struct GEOSessionID { unsigned long long x0; unsigned long long x1; })_newSessionId;

- (void)_shortSessionValues:(id /* block */)a0;
- (id)_getLocIntelSessionData;
- (void)_setShortSessionId:(struct GEOSessionID { unsigned long long x0; unsigned long long x1; })a0 sessionCreateTime:(double)a1;
- (BOOL)_updateNavSessionIDAtTime:(double)a0;
- (void)_generateNewNavSessionIDAtTime:(double)a0;
- (void)_initializeShortAndNavData;
- (void)_resetLocIntelSession;
- (void)fifteenMonthDeviceSessionValues:(id /* block */)a0;
- (void)_setLocIntelSessionData:(id)a0;
- (id)_mapsUserSessionEntity;
- (void)_setPersistedNavSessionData:(id)a0;
- (id)_get15moDeviceRawSessionData;
- (void)setSharedMapsUserSessionEntity:(id)a0 shareSessionIDWithMaps:(BOOL)a1;
- (id)longSessionAppIdForActualAppId:(id)a0;
- (void)mapsSessionEntityWithCallback:(id /* block */)a0 shareSessionIDWithMaps:(BOOL)a1 resetSession:(BOOL)a2;
- (unsigned long long)_get15moDeviceSessionConfiguredEpoch;
- (id)_updateSharedSessionDataByAppId;
- (double)_currentTime;
- (void)_processMapsAppDeletion;
- (void)_setPersistedLongSessionData:(id)a0;
- (void)_resetShortSessionID;
- (void)terminateNavigationWithRouteID:(id)a0;
- (void)_mapsShortSessionValues:(id /* block */)a0;
- (void).cxx_destruct;
- (double)_sessionCreateHourWithSessionCreateTime:(double)a0;
- (void)_set15moDeviceSessionData:(id)a0;
- (void)pauseNavigationWithRouteID:(id)a0;
- (void)startNavigationSessionWithDirectionsID:(id)a0 originalDirectionsID:(id)a1;
- (void)_currentTimeResult:(id /* block */)a0;
- (void)shortAndNavSessionValues:(id /* block */)a0;
- (id)init;
- (id)_getPersistedNavSessionData;
- (void)_saveSharedSessionDataByAppId:(id)a0;
- (void)resumeNavigationWithRouteID:(id)a0;
- (void)endNavigationSession;
- (id)_get15moDeviceSessionData;
- (void)shortSessionValues:(id /* block */)a0;
- (void)startNavigationWithRouteID:(id)a0 isEVRoute:(BOOL)a1;
- (id)_getPersistedLongSessionData;
- (void)locIntelSessionValues:(id /* block */)a0;
- (void)_updateLocIntelSessionData;

@end
