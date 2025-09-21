@class NSString, NSPointerArray, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface TSClock : NSObject {
    NSPointerArray *_clients;
    NSObject<OS_dispatch_queue> *_notificationsQueue;
}

@property (readonly, retain, nonatomic) NSMutableArray *clients;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notificationQueue;
@property (nonatomic) unsigned long long clockIdentifier;
@property (nonatomic) int lockState;
@property (readonly, nonatomic) double hostRateRatio;
@property (readonly, copy, nonatomic) NSString *clockName;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *propertyUpdateQueue;

+ (unsigned long long)_mach_absolute_time;
+ (id)clockNameForClockIdentifier:(unsigned long long)a0;
+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (void)addClient:(id)a0;
- (void)removeClient:(id)a0;
- (id)notificationQueue;
- (id)clients;
- (id)clockName;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainIntervalToTimeSyncTimeInterval:(unsigned long long)a0;
- (char)convertFromDomainTime:(unsigned long long *)a0 toMachAbsoluteTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (char)convertFromDomainTime:(unsigned long long *)a0 toTimeSyncTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToTimeSyncTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (char)convertFromMachAbsoluteTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0 withFlags:(unsigned int *)a1;
- (char)convertFromTimeSyncTime:(unsigned long long *)a0 toDomainTime:(unsigned long long *)a1 withCount:(unsigned int)a2;
- (unsigned long long)convertFromTimeSyncTimeIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromTimeSyncToDomainTime:(unsigned long long)a0;
- (unsigned int)getCoreAudioReanchors;
- (char)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (char)getRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (char)getTimeSyncTimeRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 timeSyncAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (double)hostRateRatio;
- (id)initWithClockIdentifier:(unsigned long long)a0;
- (char)updateCoreAudioReanchors:(unsigned int)a0;

@end
