@class NSSet;

@interface ContentDSPMO : DSPConfigurationMO

@property (nonatomic) int bufferFrameSize;
@property (nonatomic) int hwFacingChannelCount;
@property (nonatomic) BOOL isHWAgnostic;
@property (nonatomic) BOOL isInput;
@property (nonatomic) double sampleRate;
@property (retain, nonatomic) NSSet *dspModuleControl;
@property (retain, nonatomic) NSSet *flavor;
@property (retain, nonatomic) NSSet *port;
@property (retain, nonatomic) NSSet *semantic;

+ (id)fetchRequest;

@end
