@class NSString;

@interface CUKeyValueStoreWriter : NSObject {
    struct cdb_make { char bspace[8192]; char final[2048]; unsigned int count[256]; unsigned int start[256]; struct cdb_hplist *head; struct cdb_hp *split; struct cdb_hp *hash; unsigned int numentries; struct buffer { char *x; unsigned int p; unsigned int n; int fd; void /* function */ *op; } b; unsigned int pos; int fd; } _cdb;
    char _cdbStarted;
    NSString *_finalPath;
    int _tempFD;
    char _tempPath[1024];
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (char)addKey:(id)a0 value:(id)a1 error:(id *)a2;
- (char)finishAndReturnError:(id *)a0;
- (char)startAtPath:(id)a0 error:(id *)a1;

@end
