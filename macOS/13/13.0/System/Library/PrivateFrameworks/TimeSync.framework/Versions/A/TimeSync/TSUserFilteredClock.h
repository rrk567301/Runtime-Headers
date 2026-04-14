@class TSXUserFilteredClock;

@interface TSUserFilteredClock : TSKernelClock {
    TSXUserFilteredClock *_implXPC;
}

@property (readonly, nonatomic) unsigned long long nominalMachInterval;
@property (readonly, nonatomic) unsigned long long nominalDomainInterval;
@property (readonly, nonatomic) unsigned char filterShift;
@property (readonly, nonatomic, getter=isAdaptive) BOOL adaptive;

+ (id)diagnosticDescriptionForInfo:(id)a0 withIndent:(id)a1;
+ (id)iokitMatchingDictionaryForClockIdentifier:(unsigned long long)a0;
+ (id)keyPathsForValuesAffectingNominalMachInterval;
+ (id)keyPathsForValuesAffectingNominalDomainInterval;
+ (id)keyPathsForValuesAffectingFilterShift;
+ (id)keyPathsForValuesAffectingAdaptive;

- (void).cxx_destruct;
- (id)initWithImplXPC:(id)a0;
- (BOOL)addTimestampWithMachAbsolute:(unsigned long long)a0 andDomainTime:(unsigned long long)a1 error:(id *)a2;
- (BOOL)resetSyncServiceWithError:(id *)a0;
- (BOOL)resetFilterToNominal:(BOOL)a0 error:(id *)a1;
- (unsigned long long)nominalMachInterval;
- (unsigned long long)nominalDomainInterval;
- (unsigned char)filterShift;

@end
