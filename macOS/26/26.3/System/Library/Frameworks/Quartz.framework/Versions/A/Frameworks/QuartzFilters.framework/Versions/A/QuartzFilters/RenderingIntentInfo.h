@class NSMutableArray;

@interface RenderingIntentInfo : QComponentInfoTuple

@property (retain) NSMutableArray *intentTuples;

- (id)init;
- (void)dealloc;
- (void)reset;

@end
