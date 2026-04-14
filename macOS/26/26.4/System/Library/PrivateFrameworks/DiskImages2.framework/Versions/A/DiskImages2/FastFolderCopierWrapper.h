@class NSProgress;

@interface FastFolderCopierWrapper : NSObject

@property (nonatomic) struct shared_ptr<BaseFolderCopier> { struct BaseFolderCopier *__ptr_; struct __shared_weak_count *__cntrl_; } copier;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) unsigned long long folderSize;
@property (readonly, nonatomic) unsigned long long numFiles;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)copyWithDstFolder:(id)a0 progress:(id)a1 error:(id *)a2;
- (id)initWithSrcFolder:(id)a0 parallelMode:(BOOL)a1 auditToken:(struct { unsigned int x0[8]; } *)a2;
- (BOOL)traverseSrcFolderWithProgress:(id)a0 error:(id *)a1;

@end
