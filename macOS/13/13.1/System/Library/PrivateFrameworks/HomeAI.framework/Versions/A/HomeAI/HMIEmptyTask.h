@interface HMIEmptyTask : HMITask

@property (readonly) double duration;

- (void)mainInsideAutoreleasePool;
- (id)initWithTaskID:(int)a0 duration:(double)a1;

@end
