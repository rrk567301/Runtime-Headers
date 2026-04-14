@class NSXPCConnection;

@interface CLLocationInternalClient_CoreMotion : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedServiceClient;

- (id)connection;
- (void)setLocationServicesEnabled:(unsigned char)a0;
- (unsigned char)shutdownDaemon;
- (void)setPrivateMode:(unsigned char)a0;
- (void)notifyPassKitPayment:(id)a0 transaction:(id)a1 info:(id)a2;
- (void)notifyWeatherForecast:(id)a0 airQualityConditions:(id)a1 hourlyForecasts:(id)a2 dailyForecasts:(id)a3 latitude:(double)a4 longitude:(double)a5;
- (id)synchronousRemoteObject;
- (unsigned char)setAuthorizationStatus:(unsigned char)a0 withCorrectiveCompensation:(int)a1 forBundleID:(const struct __CFString { } *)a2 orBundlePath:(const struct __CFString { } *)a3;
- (unsigned char)getIncidentalUseMode:(int *)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (unsigned char)clearLocationAuthorizations;
- (id)getArchivedAuthorizationDecisionsWithError:(id *)a0;
- (id)applyArchivedAuthorizationDecisions:(id)a0;
- (const struct __CFDictionary { } *)copyAppsUsingLocation;
- (const struct __CFArray { } *)copyTechnologiesInUse;
- (const struct __CFString { } *)copyMicroLocationInternalVersion;
- (const struct __CFDictionary { } *)copyZaxisStats;
- (const struct __CFArray { } *)copyGnssBandsInUse;
- (void)setLocationDefaultForKey:(const struct __CFString { } *)a0 value:(const void *)a1;
- (const void *)getLocationDefaultForKey:(const struct __CFString { } *)a0;
- (id)timeZoneAtLocation:(id)a0;
- (unsigned char)getPrivateMode;
- (unsigned char)pingDaemon;
- (unsigned char)getLocationServicesEnabled:(char *)a0;
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)a0;
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)a0;
- (id)setTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 statusData:(id)a2;
- (id)getTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 error:(id *)a2;
- (double)modifyOrSetAuthorizationTime:(double)a0 forBundleID:(id)a1 orBundlePath:(id)a2;
- (id)triggerExpiredAuthorizationPurgeOnClientManager;
- (void)setGestureServiceEnabled:(unsigned char)a0;
- (unsigned char)getGestureServiceEnabled:(char *)a0;
- (unsigned char)getAuthorizationStatus:(int *)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (unsigned char)getPrecisionPermission:(char *)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2;
- (unsigned char)performMigration;
- (unsigned char)displayStatistics;
- (unsigned char)dumpLogs:(const struct __CFString { } *)a0;
- (const struct __CFDictionary { } *)copyMonitoredRegionsForBundleIdentifier:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1;
- (BOOL)checkAndExerciseAuthorizationForBundleID:(id)a0 orBundlePath:(id)a1 services:(unsigned long long)a2 error:(id *)a3;
- (BOOL)registerCircularInterestZoneWithId:(id)a0 latitude:(double)a1 longitude:(double)a2 radius:(double)a3 serviceMaskOperator:(int)a4 provenanceType:(int)a5 forBundleId:(id)a6 orBundlePath:(id)a7 error:(id *)a8;
- (BOOL)registerPhenolicInterestZoneWithId:(id)a0 phenolicLocation:(int)a1 serviceMaskOperator:(int)a2 provenanceType:(int)a3 forBundleId:(id)a4 orBundlePath:(id)a5 error:(id *)a6;
- (BOOL)setRelevance:(BOOL)a0 forInterestZoneWithId:(id)a1 registeredForBundleId:(id)a2 orBundlePath:(id)a3 error:(id *)a4;
- (BOOL)deleteInterestZoneWithId:(id)a0 registeredForBundleId:(id)a1 orBundlePath:(id)a2 error:(id *)a3;
- (unsigned char)getLocationForBundleID:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1 dynamicAccuracyReductionEnabled:(unsigned char)a2 allowsAlteredAccessoryLocations:(unsigned char)a3 location:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; } *)a4;
- (unsigned char)getGroundAltitudeForBundleID:(const struct __CFString { } *)a0 orBundlePath:(const struct __CFString { } *)a1 location:(id)a2 groundAltitude:(struct { double x0; double x1; double x2; int x3; } *)a3;
- (unsigned char)isLocationServicesCapable;
- (void)setMapMatchingRouteHint:(struct { unsigned long long x0; double x1; double x2; double x3; double x4; } *)a0 count:(int)a1 routingType:(int)a2 stepType:(int)a3;
- (int)getAccessoryTypeBitSet;
- (unsigned char)copyLastLog;
- (unsigned char)setStatusBarIconEnabled:(BOOL)a0 forEntityClass:(int)a1;
- (unsigned char)getStatusBarIconEnabled:(BOOL *)a0 forEntityClass:(int)a1;
- (int)getStatusBarIconState;
- (id)getPipelinedCache;
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)a0 forBundleID:(const struct __CFString { } *)a1 orBundlePath:(const struct __CFString { } *)a2 orAuditToken:(struct { unsigned int x0[8]; })a3 byLocationButton:(unsigned char)a4 voiceInteractionEnabled:(unsigned char)a5;

@end
