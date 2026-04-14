@class TSgPTPClock, NSPointerArray, NSObject, TSXgPTPManager;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject {
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
    TSXgPTPManager *_implXPC;
    NSPointerArray *_clients;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _clientLock;
}

@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly, retain, nonatomic) TSgPTPClock *systemDomain;

+ (id)diagnosticInfo;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;
+ (id)gPTPManager;
+ (id)keyPathsForValuesAffectingSystemDomain;
+ (id)keyPathsForValuesAffectingSystemDomainClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance0ClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance1ClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance2ClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance3ClockIdentifier;
+ (id)keyPathsForValuesAffectingAirPlayPTPInstanceClockIdentifier;
+ (id)keyPathsForValuesAffectingCopresencePTPInstanceClockIdentifier;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_impl;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)systemDomain;
- (unsigned long long)systemDomainClockIdentifier;
- (BOOL)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAirPlayPTPInstanceWithError:(id *)a0;
- (BOOL)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeCopresencePTPInstanceWithError:(id *)a0;
- (void)interruptedgPTPManager;

@end
