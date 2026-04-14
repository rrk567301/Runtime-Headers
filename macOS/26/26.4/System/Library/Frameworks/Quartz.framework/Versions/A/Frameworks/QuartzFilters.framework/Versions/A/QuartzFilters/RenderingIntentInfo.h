@class NSMutableArray;

@interface RenderingIntentInfo : QComponentInfoTuple

@property (retain) NSMutableArray *intentTuples;

- (void)reset;
- (id)init;
- (void)dealloc;

@end
