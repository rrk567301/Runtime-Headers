@class NSString, NSError;

@interface MSUCheckpointAsyncContext : NSObject

@property (retain, nonatomic) NSString *contextUUID;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int result;
@property (nonatomic) void *stepDescription;
@property (nonatomic) void *awaitDescription;
@property void *checkpoint_closure_context;

- (BOOL)wait;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (BOOL)waitUntilTime:(unsigned long long)a0;
- (void)runForCheckpoint:(void *)a0;
- (void)runSynchronousForCheckpoint:(void *)a0;

@end
