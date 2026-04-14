@class NSMutableArray;

@interface RenderingIntentInfo : QComponentInfoTuple

@property (retain) NSMutableArray *intentTuples;

- (void)dealloc;
- (void)reset;
- (id)init;

@end
