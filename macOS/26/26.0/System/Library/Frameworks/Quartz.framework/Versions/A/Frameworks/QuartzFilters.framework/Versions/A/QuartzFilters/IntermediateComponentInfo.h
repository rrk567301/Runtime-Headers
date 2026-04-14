@class NSArray, NSMutableArray;

@interface IntermediateComponentInfo : QComponentInfoTuple

@property (retain) NSArray *midNames;
@property (retain) NSMutableArray *intermediateTuples;

- (void)reset;
- (void)dealloc;
- (id)init;

@end
