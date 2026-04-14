@class NSArray, NSMutableArray;

@interface IntermediateComponentInfo : QComponentInfoTuple

@property (retain) NSArray *midNames;
@property (retain) NSMutableArray *intermediateTuples;

- (id)init;
- (void)dealloc;
- (void)reset;

@end
