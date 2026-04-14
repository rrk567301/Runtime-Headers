@class NSArray;

@interface PXStoryColorGradingConfiguration : NSObject

@property (readonly, nonatomic) NSArray *cubeInfos;
@property (readonly, nonatomic) unsigned long long count;

- (void).cxx_destruct;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (id)init;
- (id)initWithCubeInfos:(id)a0;

@end
