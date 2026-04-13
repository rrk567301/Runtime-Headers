@class IOKConnection, NSObject, IOKService, TSgPTPClock;
@protocol OS_dispatch_queue;

@interface TSgPTPManager : NSObject {
    IOKService *_service;
    IOKConnection *_connection;
    TSgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
}

@property (readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly, retain, nonatomic) TSgPTPClock *systemDomain;

+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;
+ (id)sharedgPTPManager;
+ (id)diagnosticDescriptionForService:(id)a0 withIndent:(id)a1;
+ (id)diagnosticInfoForService:(id)a0;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (id)systemDomain;
- (BOOL)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAirPlayPTPInstanceWithError:(id *)a0;
- (BOOL)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeCopresencePTPInstanceWithError:(id *)a0;

@end
