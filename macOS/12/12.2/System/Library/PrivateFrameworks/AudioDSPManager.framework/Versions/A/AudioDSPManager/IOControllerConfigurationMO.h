@class IOControllerSemanticMO;

@interface IOControllerConfigurationMO : NSManagedObject

@property (nonatomic) int bufferFrameSize;
@property (nonatomic) double sampleRate;
@property (retain, nonatomic) IOControllerSemanticMO *semantic;

+ (id)fetchRequest;

@end
