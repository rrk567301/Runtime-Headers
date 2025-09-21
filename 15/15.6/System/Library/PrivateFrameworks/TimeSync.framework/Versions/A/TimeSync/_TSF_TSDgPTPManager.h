@class NSObject, _TSF_IODConnection, IOKService, _TSF_TSDgPTPClock;
@protocol OS_dispatch_queue;

@interface _TSF_TSDgPTPManager : NSObject {
    IOKService *_service;
    _TSF_IODConnection *_connection;
    _TSF_TSDgPTPClock *_systemDomain;
    NSObject<OS_dispatch_queue> *_systemDomainQueue;
}

@property (readonly, nonatomic) unsigned long long avbPTPInstance0ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance1ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance2ClockIdentifier;
@property (readonly, nonatomic) unsigned long long avbPTPInstance3ClockIdentifier;
@property (readonly, nonatomic) unsigned long long airPlayPTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long copresencePTPInstanceClockIdentifier;
@property (readonly, nonatomic) unsigned long long systemDomainClockIdentifier;
@property (readonly, retain, nonatomic) _TSF_TSDgPTPClock *systemDomain;

+ (void)initialize;
+ (id)diagnosticInfo;
+ (id)gPTPManager;
+ (void)notifyWhengPTPManagerIsAvailable:(id /* block */)a0;
+ (void)notifyWhengPTPManagerIsUnavailable:(id /* block */)a0;
+ (id)sharedgPTPManager;
+ (id)sharedgPTPManagerSyncWithTimeout:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)systemDomain;
- (char)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (char)addCopresencePTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (char)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (char)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (char)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (char)logInterfaceStatisticsWithError:(id *)a0;
- (char)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (char)removeAirPlayPTPInstanceWithError:(id *)a0;
- (char)removeCopresencePTPInstanceWithError:(id *)a0;
- (char)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (char)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;

@end
