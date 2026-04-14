@class NSString, NSPointerArray, TSXKernelClock;

@interface TSKernelClock : TSClock <TSXKernelClockClient> {
    TSXKernelClock *_implXPC;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
    BOOL _clientsAddedToDaemon;
}

@property (copy, nonatomic) id /* block */ interruptionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)keyPathsforvaluesaffectingLockState;
+ (id)keyPathsForValuesAffectingHostRateRatio;
+ (id)availableKernelClockIdentifiers;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingClockName;

- (void).cxx_destruct;
- (id)_impl;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)clockName;
- (int)lockState;
- (void)setPropertyUpdateQueue:(id)a0;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (BOOL)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (BOOL)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (BOOL)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (BOOL)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (BOOL)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (double)hostRateRatio;
- (id)initWithImplXPC:(id)a0;
- (void)didResetClock:(id)a0;
- (void)didChangeClockMasterForClock:(id)a0;
- (void)didChangeLockStateTo:(int)a0 forClock:(id)a1;
- (void)didBeginClockGrandmasterChangeForClock:(id)a0;
- (void)didBeginClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didEndClockGrandmasterChangeForClock:(id)a0;
- (void)didEndClockGrandmasterChangeWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)didProcessSync:(id)a0;
- (void)didChangeLocalPortWithGrandmasterID:(unsigned long long)a0 localPort:(unsigned short)a1 forClock:(id)a2;
- (void)interruptedConnectionForClock:(id)a0;
- (void)_cleanupClients;

@end
