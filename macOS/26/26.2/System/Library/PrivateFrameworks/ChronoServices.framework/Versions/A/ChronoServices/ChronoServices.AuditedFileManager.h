@interface ChronoServices.AuditedFileManager : NSFileManager {
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_urls;
}

- (BOOL)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (BOOL)removeItemAtPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (BOOL)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (BOOL)removeItemAtURL:(id)a0 error:(id *)a1;
- (id)init;
- (BOOL)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(BOOL)a3 error:(id *)a4;
- (BOOL)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(BOOL)a1 attributes:(id)a2 error:(id *)a3;
- (BOOL)copyItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (BOOL)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;

@end
