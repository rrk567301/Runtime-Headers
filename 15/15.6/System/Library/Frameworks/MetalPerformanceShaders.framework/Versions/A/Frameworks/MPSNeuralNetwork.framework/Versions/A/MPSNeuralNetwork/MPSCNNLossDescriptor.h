@interface MPSCNNLossDescriptor : NSObject <NSCopying>

@property (nonatomic) unsigned int lossType;
@property (nonatomic) int reductionType;
@property (nonatomic) char reduceAcrossBatch;
@property (nonatomic) float weight;
@property (nonatomic) float labelSmoothing;
@property (nonatomic) unsigned long long numberOfClasses;
@property (nonatomic) float epsilon;
@property (nonatomic) float delta;

+ (id)cnnLossDescriptorWithType:(unsigned int)a0 reductionType:(int)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;

@end
