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
- (id)systemDomain;
- (id)init;
- (void).cxx_destruct;
- (BOOL)addDomain:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)removeAVBDomainWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)addAVBDomainIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addAVBPTPInstanceIndex:(unsigned short)a0 identifier:(unsigned long long *)a1 error:(id *)a2;
- (BOOL)addAirPlayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addCopresencePTPInstance:(unsigned long long *)a0 ntpAndUpTimeOffsetNsec:(long long)a1 isLocalClockSourceFromNTP:(BOOL)a2 error:(id *)a3;
- (BOOL)addCopresencePTPInstanceRefWithError:(id *)a0;
- (BOOL)addPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)addTimeOfDayPTPInstance:(unsigned long long *)a0 error:(id *)a1;
- (BOOL)dockReplayTimestamps:(struct { struct TSReplayTimestampsHeader { long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3[13]; char x4[16]; } x0; struct TSReplayTimestampsTimestamp *x1; } *)a0;
- (BOOL)logInterfaceStatisticsWithError:(id *)a0;
- (BOOL)removeAVBPTPInstanceWithIndex:(unsigned short)a0 error:(id *)a1;
- (BOOL)removeAirPlayPTPInstanceWithError:(id *)a0;
- (BOOL)removeCopresencePTPInstanceWithError:(id *)a0;
- (BOOL)removeDomainWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)removePTPInstanceWithIdentifier:(unsigned long long)a0 error:(id *)a1;
- (BOOL)startReplayTimestamps:(id)a0;
- (BOOL)stopReplayTimestamps:(id)a0;

@end
