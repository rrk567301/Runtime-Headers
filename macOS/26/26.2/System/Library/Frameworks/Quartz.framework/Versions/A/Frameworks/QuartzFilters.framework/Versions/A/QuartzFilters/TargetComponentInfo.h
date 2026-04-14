@class NSArray, NSMutableArray;

@interface TargetComponentInfo : QComponentInfoTuple

@property (retain) NSArray *targetNames;
@property (retain) NSMutableArray *profileTuples;

- (void)reset;
- (id)init;
- (void)dealloc;

@end
