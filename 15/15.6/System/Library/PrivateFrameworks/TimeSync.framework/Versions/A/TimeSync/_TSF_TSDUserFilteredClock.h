@interface _TSF_TSDUserFilteredClock : _TSF_TSDKernelClock

@property (readonly, nonatomic) unsigned long long nominalMachInterval;
@property (readonly, nonatomic) unsigned long long nominalDomainInterval;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic, getter=isAdaptive) char adaptive;

+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;

- (char)addTimestampWithMachAbsolute:(unsigned long long)a0 andDomainTime:(unsigned long long)a1 error:(id *)a2;
- (unsigned char)filterShift;
- (unsigned long long)nominalDomainInterval;
- (unsigned long long)nominalMachInterval;
- (char)resetFilterToNominal:(char)a0 error:(id *)a1;
- (char)resetSyncServiceWithError:(id *)a0;

@end
