@class TSgPTPClock, NSPointerArray, NSObject, _TSF_TSDgPTPManager;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject {
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
    _TSF_TSDgPTPManager *_impl;
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
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)gPTPManager;
+ (id)keyPathsForValuesAffectingAirPlayPTPInstanceClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance0ClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance1ClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance2ClockIdentifier;
+ (id)keyPathsForValuesAffectingAvbPTPInstance3ClockIdentifier;
+ (id)keyPathsForValuesAffectingCopresencePTPInstanceClockIdentifier;
+ (id)keyPathsForValuesAffectingSystemDomain;
+ (id)keyPathsForValuesAffectingSystemDomainClockIdentifier;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)systemDomain;
- (char)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (char)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (char)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (char)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (char)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (void)interruptedgPTPManager;
- (char)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (char)removeAirPlayPTPInstanceWithError:(id *)a0;
- (char)removeCopresencePTPInstanceWithError:(id *)a0;
- (char)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (char)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (unsigned long long)systemDomainClockIdentifier;

@end
