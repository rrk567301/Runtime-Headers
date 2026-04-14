@class NSArray, NSMutableArray;

@interface TargetComponentInfo : QComponentInfoTuple

@property (retain) NSArray *targetNames;
@property (retain) NSMutableArray *profileTuples;

- (void)dealloc;
- (void)reset;
- (id)init;

@end
