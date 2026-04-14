@class NSProgress;

@interface FastFolderCopierWrapper : NSObject

@property (nonatomic) struct shared_ptr<BaseFolderCopier> { struct BaseFolderCopier *__ptr_; struct __shared_weak_count *__cntrl_; } copier;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) unsigned long long folderSize;
@property (readonly, nonatomic) unsigned long long numFiles;

- (void).cxx_destruct;
- (id).cxx_construct;
- (BOOL)copyWithDstFolder:(id)a0 error:(id *)a1;
- (id)initWithSrcFolder:(id)a0 parallelMode:(BOOL)a1 progress:(id)a2;
- (BOOL)traverseSrcFolderWithError:(id *)a0;

@end
