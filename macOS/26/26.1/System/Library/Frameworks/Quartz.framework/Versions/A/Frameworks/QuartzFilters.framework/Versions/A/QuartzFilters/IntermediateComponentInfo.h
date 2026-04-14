@class NSArray, NSMutableArray;

@interface IntermediateComponentInfo : QComponentInfoTuple

@property (retain) NSArray *midNames;
@property (retain) NSMutableArray *intermediateTuples;

- (void)dealloc;
- (void)reset;
- (id)init;

@end
