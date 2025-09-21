@class _TSF_TSDUserFilteredClock;

@interface TSDCUserFilteredClock : TSDCKernelClock {
    _TSF_TSDUserFilteredClock *_userFilteredClock;
    unsigned int _lastValidIndex;
    BOOL _needTimeSyncTimeUpdate;
}

@property (readonly, nonatomic) unsigned long long nominalMachInterval;
@property (readonly, nonatomic) unsigned long long nominalDomainInterval;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic, getter=isAdaptive) char adaptive;

- (void).cxx_destruct;
- (char)addTimestampWithMachAbsolute:(unsigned long long)a0 andDomainTime:(unsigned long long)a1 error:(id *)a2;
- (unsigned long long)convertFromDomainIntervalToMachAbsoluteInterval:(unsigned long long)a0;
- (unsigned long long)convertFromDomainToMachAbsoluteTime:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteIntervalToDomainInterval:(unsigned long long)a0;
- (unsigned long long)convertFromMachAbsoluteToDomainTime:(unsigned long long)a0;
- (char)getMachAbsoluteRateRatioNumerator:(unsigned long long *)a0 denominator:(unsigned long long *)a1 machAnchor:(unsigned long long *)a2 andDomainAnchor:(unsigned long long *)a3 withError:(id *)a4;
- (id)initWithKernelClock:(id)a0;
- (char)resetFilterToNominal:(char)a0 error:(id *)a1;
- (char)resetSyncServiceWithError:(id *)a0;
- (char)waitTimeSyncTimeUpdate;

@end
