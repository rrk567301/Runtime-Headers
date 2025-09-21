@class NSString, NSError;

@interface MSUCheckpointAsyncContext : NSObject

@property (retain, nonatomic) NSString *contextUUID;
@property (retain, nonatomic) NSError *error;
@property (nonatomic) int result;
@property void *checkpoint_closure_context;

- (void)dealloc;
- (id)init;
- (char)wait;
- (char)waitUntilDate:(id)a0;
- (void)runForCheckpoint:(void *)a0;
- (void)runSynchronousForCheckpoint:(void *)a0;

@end
