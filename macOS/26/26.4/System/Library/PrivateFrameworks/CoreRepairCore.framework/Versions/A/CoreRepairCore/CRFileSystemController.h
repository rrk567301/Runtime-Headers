@class NSString;

@interface CRFileSystemController : NSObject {
    NSString *activeFDRDataPathStr;
    NSString *defaultFDRPathStr;
    NSString *alternativeFDRPathStr;
    NSString *alternativeFDRRealPathStr;
    NSString *tmpFDRDataPathStr;
}

+ (id)sharedSingleton;

- (id)_init;
- (void).cxx_destruct;
- (id)init;
- (BOOL)cleanupFileSystemForRepair;
- (BOOL)clearRepairBackup:(id *)a0;
- (long long)commitToFileSystem;
- (BOOL)setupAlternativeFDRPath:(id)a0;
- (id)setupFileSystemForRepair;
- (BOOL)syncAlternativeFDRPath;
- (BOOL)syncFDRDataAtPath:(id)a0 toPath:(id)a1;

@end
