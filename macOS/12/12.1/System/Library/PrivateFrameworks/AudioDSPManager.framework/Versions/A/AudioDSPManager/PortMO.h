@class NSString, NSSet, DeviceConfigurationMO, VolumePolicyMO;

@interface PortMO : NSManagedObject

@property (nonatomic) BOOL hwHasVP;
@property (copy, nonatomic) NSString *portType;
@property (nonatomic) int virtualChannelCount;
@property (retain, nonatomic) DeviceConfigurationMO *configuration;
@property (retain, nonatomic) NSSet *contentDSP;
@property (retain, nonatomic) NSSet *dspModule;
@property (retain, nonatomic) NSSet *hwDSP;
@property (retain, nonatomic) NSSet *ioStreamFormat;
@property (retain, nonatomic) VolumePolicyMO *volumePolicy;

+ (id)fetchRequest;

@end
