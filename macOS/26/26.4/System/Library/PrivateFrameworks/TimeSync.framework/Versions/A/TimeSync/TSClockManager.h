@class TSClock, _TSF_TSDClockManager, NSPointerArray, TSDCTranslationClock;

@interface TSClockManager : NSObject {
    _TSF_TSDClockManager *_impl;
    TSDCTranslationClock *_translationClockDC;
    struct mach_timebase_info { unsigned int numer; unsigned int denom; } _timebaseInfo;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly, nonatomic) TSClock *timeSyncClock;
@property (readonly, nonatomic) TSClock *translationClock;
@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;

+ (void)initialize;
+ (id)frameworkClassNameForDaemonClassName:(id)a0;
+ (id)keyPathsForValuesAffectingTimeSyncTimeClockIdentifier;
+ (void)swiftClockManagerIsAvailable:(id /* block */)a0;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)keyPathsForValuesAffectingTranslationClockIdentifier;
+ (id)keyPathsForValuesAffectingTimeSyncTimeIsMachAbsoluteTime;
+ (id)sharedClockManager;
+ (void)notifyWhenClockManagerIsAvailable:(id /* block */)a0;
+ (id)sharedClockManagerSyncWithTimeout:(unsigned long long)a0;
+ (id)timeSyncAudioClockDeviceUIDForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticInfo;
+ (id)clockManager;
+ (id)diagnosticInfoForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForClockIdentifier:(unsigned long long)a0 withIndent:(id)a1;
+ (void)notifyWhenClockManagerIsUnavailable:(id /* block */)a0;

- (void)addClient:(id)a0;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (void)removeClient:(id)a0;
- (BOOL)removePersistentUserFilteredClock:(id)a0 error:(id *)a1;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addPersistentUserFilteredClockRef:(id)a0 error:(id *)a1;
- (unsigned long long)getPersistentUserFilteredClockIdentifier:(id)a0 error:(id *)a1;
- (id)availableClockIdentifiers;
- (unsigned long long)addPersistentUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 withUserID:(id)a4 error:(id *)a5;
- (BOOL)getConnectionForPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1 daemonPortClassName:(id *)a2 endpoint:(id *)a3;
- (unsigned long long)machAbsoluteToNanoseconds:(unsigned long long)a0;
- (BOOL)getConnectionForClockWithClockIdentifier:(unsigned long long)a0 daemonClockClassName:(id *)a1 endpoint:(id *)a2;
- (void).cxx_destruct;
- (id)clockWithClockIdentifier:(unsigned long long)a0;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)timeSyncTimeIsMachAbsoluteTime;
- (unsigned long long)machAbsoluteNanosecondsToTicks:(unsigned long long)a0;
- (unsigned long long)nanosecondsToMachAbsolute:(unsigned long long)a0;
- (void)interruptedClockManager;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (id)init;
- (unsigned long long)machAbsoluteTicksToNanoseconds:(unsigned long long)a0;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (unsigned long long)translationClockIdentifier;
- (unsigned long long)timeSyncTimeClockIdentifier;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removegPTPServicesWithError:(id *)a0;

@end
