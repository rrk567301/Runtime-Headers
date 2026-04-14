@interface ResourceUsageAndRenderStage : NSObject

@property (nonatomic) unsigned long long usage;
@property (nonatomic) unsigned long long renderStages;

- (id)initWithUsage:(unsigned long long)a0 renderStages:(unsigned long long)a1;

@end
