@class NSString;

@interface FPDSubtreeChangeDetector : NSObject {
    int _fd;
    NSString *_path;
    unsigned long long _fileID;
    unsigned long long _genCount;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (unsigned long long)retrieveFileIDWithError:(id *)a0;
- (BOOL)maintainDirstatWithError:(id *)a0;
- (unsigned long long)retrieveDirstatGenCountWithError:(id *)a0;
- (id)initAtPath:(id)a0 error:(id *)a1;
- (id)verifyTreeIdentityWithError:(id *)a0;

@end
