@class NSXPCConnection;

@interface CLLocationInternalClient : NSObject {
    NSXPCConnection *_connection;
}

+ (id)sharedServiceClient;

- (void)clearLocationAuthorizationForBundleId:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1;
- (unsigned char)getGestureServiceEnabled:(char *)a0;
- (int)getAccessoryTypeBitSet;
- (id)setTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 statusData:(id)a2;
- (id)applyArchivedAuthorizationDecisions:(id)a0;
- (unsigned char)displayStatistics;
- (void)setLocationServicesEnabled:(unsigned char)a0;
- (unsigned char)pingDaemon;
- (unsigned char)getPrivateMode;
- (void)setPrivateMode:(unsigned char)a0;
- (BOOL)setRelevance:(BOOL)a0 forInterestZoneWithId:(id)a1 registeredForBundleId:(id)a2 orBundlePath:(id)a3 error:(id *)a4;
- (unsigned char)copyLastLog;
- (id)getPipelinedCache;
- (unsigned char)getStatusBarIconEnabled:(BOOL *)a0 forEntityClass:(int)a1;
- (id)triggerExpiredAuthorizationPurgeOnClientManager;
- (void)notifyWeatherForecast:(id)a0 airQualityConditions:(id)a1 hourlyForecasts:(id)a2 dailyForecasts:(id)a3 latitude:(double)a4 longitude:(double)a5;
- (unsigned char)getLocationForBundleID:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1 dynamicAccuracyReductionEnabled:(unsigned char)a2 allowsAlteredAccessoryLocations:(unsigned char)a3 location:(struct { int x0; struct { double x0; double x1; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; int x10; double x11; int x12; struct { double x0; double x1; } x13; double x14; int x15; unsigned int x16; int x17; int x18; int x19; double x20; BOOL x21; } *)a4;
- (BOOL)deleteInterestZoneWithId:(id)a0 registeredForBundleId:(id)a1 orBundlePath:(id)a2 error:(id *)a3;
- (BOOL)registerCircularInterestZoneWithId:(id)a0 latitude:(double)a1 longitude:(double)a2 radius:(double)a3 serviceMaskOperator:(int)a4 provenanceType:(int)a5 forBundleId:(id)a6 orBundlePath:(id)a7 error:(id *)a8;
- (unsigned char)setStatusBarIconEnabled:(BOOL)a0 forEntityClass:(int)a1;
- (void)setLocationDefaultForKey:(struct __CFString { } *)a0 value:(void *)a1;
- (unsigned char)dumpLogs:(struct __CFString { } *)a0;
- (unsigned char)reportLocationUtilityEvent:(int)a0 atDate:(struct __CFDate { } *)a1;
- (id)setAuthorizationPromptMapDisplayEnabled:(unsigned char)a0;
- (int)getStatusBarIconState;
- (unsigned char)getPinnedLocationAuthorizationState:(struct CLLocationCoordinate2D { double x0; double x1; } *)a0;
- (BOOL)registerPhenolicInterestZoneWithId:(id)a0 phenolicLocation:(int)a1 serviceMaskOperator:(int)a2 provenanceType:(int)a3 forBundleId:(id)a4 orBundlePath:(id)a5 error:(id *)a6;
- (void)setTrackRunHint:(struct { double x0; int x1; int x2; } *)a0;
- (void *)getLocationDefaultForKey:(struct __CFString { } *)a0;
- (unsigned char)getIncidentalUseMode:(int *)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (BOOL)checkAndExerciseAuthorizationForBundleID:(id)a0 orBundlePath:(id)a1 services:(unsigned long long)a2 error:(id *)a3;
- (unsigned char)setTemporaryPreciseAuthorizationGranted:(unsigned char)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (id)getOdometryBatchedLocations;
- (unsigned char)getLocationServicesEnabled:(char *)a0;
- (unsigned char)setAuthorizationStatus:(unsigned char)a0 withCorrectiveCompensation:(int)a1 forBundleID:(struct __CFString { } *)a2 orBundlePath:(struct __CFString { } *)a3;
- (int)getAccessoryPASCDTransmissionState;
- (id)synchronousRemoteObject;
- (id)timeZoneAtLocation:(id)a0;
- (unsigned char)getAuthorizationStatusForApp:(int *)a0 withAuditToken:(struct { unsigned int x0[8]; })a1;
- (double)modifyOrSetAuthorizationTime:(double)a0 forBundleID:(id)a1 orBundlePath:(id)a2;
- (unsigned char)getPrecisionPermission:(char *)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (unsigned char)getAuthorizationPromptMapDisplayEnabled:(char *)a0;
- (struct __CFArray { } *)copyGnssBandsInUse;
- (unsigned char)isLocationServicesCapable;
- (unsigned char)getGyroCalibrationDatabaseBiasFit:(struct { int x0; double x1; double x2; float x3; float x4; union { struct { struct { float x0; float x1; float x2; } x0; struct { float x0; float x1; float x2; } x1; } x0; struct { BOOL x0; char x1[282]; } x1; } x5; } *)a0 atTemperature:(float)a1;
- (struct __CFDictionary { } *)copyInternalState;
- (unsigned char)tearDownLocationAuthPromptForBundleID:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1;
- (void)setGestureServiceEnabled:(unsigned char)a0;
- (unsigned char)performMigration;
- (void)setMapMatchingRouteHint:(struct { unsigned long long x0; double x1; double x2; double x3; double x4; } *)a0 count:(int)a1 routingType:(int)a2 stepType:(int)a3;
- (id)asynchronousRemoteObject;
- (struct __CFDictionary { } *)copyActiveClientsUsingLocation;
- (struct __CFArray { } *)copyTechnologiesInUse;
- (struct __CFDictionary { } *)copyAppsUsingLocation;
- (id)getTemporaryAuthorizationStatusForBundleId:(id)a0 orBundlePath:(id)a1 error:(id *)a2;
- (unsigned char)setPinnedLocationAuthorization:(unsigned char)a0;
- (unsigned char)getGroundAltitudeForBundleID:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1 location:(id)a2 groundAltitude:(struct { double x0; double x1; double x2; int x3; } *)a3;
- (unsigned char)shutdownDaemon;
- (unsigned char)clearLocationAuthorizations;
- (id)connection;
- (struct __CFDictionary { } *)copyZaxisStats;
- (unsigned char)getAuthorizationStatus:(int *)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2;
- (void)notifyPassKitPayment:(id)a0 transaction:(id)a1 info:(id)a2;
- (id)getArchivedAuthorizationDecisionsWithError:(id *)a0;
- (unsigned char)setTemporaryAuthorizationGranted:(unsigned char)a0 forBundleID:(struct __CFString { } *)a1 orBundlePath:(struct __CFString { } *)a2 orAuditToken:(struct { unsigned int x0[8]; })a3 byLocationButton:(unsigned char)a4 voiceInteractionEnabled:(unsigned char)a5;
- (struct __CFDictionary { } *)copyMonitoredRegionsForBundleIdentifier:(struct __CFString { } *)a0 orBundlePath:(struct __CFString { } *)a1;

@end
