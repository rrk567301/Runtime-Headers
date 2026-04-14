@class NSArray, NSMutableArray;

@interface TargetComponentInfo : QComponentInfoTuple

@property (retain) NSArray *targetNames;
@property (retain) NSMutableArray *profileTuples;

- (id)init;
- (void)dealloc;
- (void)reset;

@end
