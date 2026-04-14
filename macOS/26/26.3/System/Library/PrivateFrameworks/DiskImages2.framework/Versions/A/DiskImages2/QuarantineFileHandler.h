@interface QuarantineFileHandler : NSObject

@property (nonatomic) struct _qtn_file { } *qtFile;
@property (readonly, nonatomic) BOOL isQuarantined;

- (void)dealloc;
- (BOOL)applyMountPointsWithBSDName:(id)a0 error:(id *)a1;
- (BOOL)checkErrorWithQtnInitResult:(int)a0 error:(id *)a1;
- (id)getFileInfoWithError:(id *)a0;
- (id)initWithBackend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a0 error:(id *)a1;
- (id)initWithFD:(int)a0 error:(id *)a1;
- (id)initWithFlag:(unsigned int)a0 error:(id *)a1;

@end
