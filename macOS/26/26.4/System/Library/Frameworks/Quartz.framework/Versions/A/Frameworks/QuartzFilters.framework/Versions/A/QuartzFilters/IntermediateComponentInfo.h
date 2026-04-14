@class NSArray, NSMutableArray;

@interface IntermediateComponentInfo : QComponentInfoTuple

@property (retain) NSArray *midNames;
@property (retain) NSMutableArray *intermediateTuples;

- (void)reset;
- (id)init;
- (void)dealloc;

@end
