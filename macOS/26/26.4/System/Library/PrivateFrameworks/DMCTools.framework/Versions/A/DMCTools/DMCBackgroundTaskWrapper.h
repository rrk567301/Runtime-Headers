@class BGSystemTask;

@interface DMCBackgroundTaskWrapper : NSObject

@property (nonatomic, retain) BGSystemTask *task;
@property (nonatomic) BOOL completed;
@property (nonatomic) BOOL extended;

- (id)initWithTask:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setCompleted;
- (BOOL)extendForInterval:(double)a0 error:(id *)a1;

@end
