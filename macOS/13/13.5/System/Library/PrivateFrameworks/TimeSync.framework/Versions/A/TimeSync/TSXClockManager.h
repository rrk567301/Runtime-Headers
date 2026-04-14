@class NSString, TSClockManager, TSXTranslationClock;

@interface TSXClockManager : TSXClient <TSXClockManagerClientProtocol> {
    TSClockManager *_clockManager;
}

@property (readonly, nonatomic) unsigned long long timeSyncTimeClockIdentifier;
@property (readonly, nonatomic) unsigned long long translationClockIdentifier;
@property (readonly, nonatomic) TSXTranslationClock *translationClock;
@property (readonly, nonatomic) BOOL timeSyncTimeIsMachAbsoluteTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)serviceName;
+ (void)_setIsAvailable;
+ (void)_setIsUnavailable;
+ (id)clientProtocol;
+ (id)serverProtocol;

- (void).cxx_destruct;
- (id)exportedObject;
- (BOOL)addTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removeMappingFromClockIDToCoreAudioClockDomainForClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addMappingFromClockID:(unsigned long long)a0 toCoreAudioClockDomain:(unsigned int *)a1 error:(id *)a2;
- (unsigned long long)addUserFilteredClockWithMachInterval:(unsigned long long)a0 domainInterval:(unsigned long long)a1 usingFilterShift:(unsigned char)a2 isAdaptive:(BOOL)a3 error:(id *)a4;
- (BOOL)addgPTPServicesWithError:(id *)a0;
- (id)availableClockIdentifiers;
- (void)changedTranslationClockMaster;
- (BOOL)getConnectionForClockWithClockIdentifier:(unsigned long long)a0 daemonClockClassName:(id *)a1 endpoint:(id *)a2;
- (BOOL)getConnectionForPortWithClockIdentifier:(unsigned long long)a0 portNumber:(unsigned short)a1 daemonPortClassName:(id *)a2 endpoint:(id *)a3;
- (unsigned long long)getTimeSyncTimeClockIdentifier;
- (BOOL)getTimeSyncTimeIsMachAbsoluteTime;
- (unsigned long long)getTranslationClockIdentifier;
- (id)initWithClockManager:(id)a0;
- (void)interruptedConnection;
- (BOOL)nextAvailableDynamicClockID:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)releaseDynamicClockID:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removeTSNCaptureServicesWithError:(id *)a0;
- (BOOL)removeUserFilteredClockWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removegPTPServicesWithError:(id *)a0;
- (void)updateTranslationClockLockState:(int)a0;
- (void)updateTranslationClockState;
- (void)updateTranslationClockTimeSyncTime:(unsigned long long)a0 timeSyncInterval:(unsigned long long)a1 domainTime:(unsigned long long)a2 domainInterval:(unsigned long long)a3;

@end
