@class BGSystemTask;

@interface DMCBackgroundTaskWrapper : NSObject

@property (nonatomic, retain) BGSystemTask *task;
@property (nonatomic) BOOL completed;

- (id)initWithTask:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setCompleted;
- (BOOL)extendForInterval:(double)a0 error:(id *)a1;

@end
