@class NSSet;

@interface MXMEnergySampleTag : MXMSampleTag

@property (class, readonly, copy, nonatomic) NSSet *allEnergyTags;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *energy;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *cpuEnergyProcess;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *gpuEnergyProcess;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *aneEnergyProcess;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *cpuInstructionsProcess;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *bytesReadProcess;
@property (class, readonly, copy, nonatomic) MXMEnergySampleTag *bytesWrittenProcess;

@end
