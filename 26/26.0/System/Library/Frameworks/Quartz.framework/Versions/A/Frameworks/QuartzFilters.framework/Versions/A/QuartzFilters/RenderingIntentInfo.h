@class NSMutableArray;

@interface RenderingIntentInfo : QComponentInfoTuple

@property (retain) NSMutableArray *intentTuples;

- (void)reset;
- (void)dealloc;
- (id)init;

@end
