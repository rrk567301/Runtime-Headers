@class FIOperation;

@interface FISubOperation : NSObject

@property (copy, nonatomic) id /* block */ nameConflictHandler;
@property (readonly, weak, nonatomic) FIOperation *operation;

- (id)initWithOperation:(id)a0;
- (void)done;
- (void)cancel;
- (void).cxx_destruct;
- (id)isValidSuboperation:(unsigned int)a0 callingFunc:(struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *x0; } x0; })a1;
- (void)postCancelSuboperation;
- (BOOL)startFileSystemSuboperation:(unsigned int)a0 newAliasOrFolderName:(id)a1 propertyList:(struct OpaquePropertyListRef { } *)a2 aliasTarget:(id)a3 error:(id *)a4;
- (BOOL)startPermissionsSuboperation:(unsigned int)a0 fileSec:(id)a1 error:(id *)a2;
- (BOOL)startTagStampingSuboperation:(unsigned int)a0 error:(id *)a1;

@end
