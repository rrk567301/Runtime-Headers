@interface ChronoServices.AuditedFileManager : NSFileManager {
    void /* unknown type, empty encoding */ _lock;
    void /* unknown type, empty encoding */ _lock_urls;
}

- (id)init;
- (void).cxx_destruct;
- (id)URLForDirectory:(unsigned long long)a0 inDomain:(unsigned long long)a1 appropriateForURL:(id)a2 create:(char)a3 error:(id *)a4;
- (char)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)createDirectoryAtURL:(id)a0 withIntermediateDirectories:(char)a1 attributes:(id)a2 error:(id *)a3;
- (char)removeItemAtPath:(id)a0 error:(id *)a1;
- (char)removeItemAtURL:(id)a0 error:(id *)a1;
- (char)createDirectoryAtPath:(id)a0 withIntermediateDirectories:(char)a1 attributes:(id)a2 error:(id *)a3;
- (char)copyItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (char)createFileAtPath:(id)a0 contents:(id)a1 attributes:(id)a2;
- (char)moveItemAtPath:(id)a0 toPath:(id)a1 error:(id *)a2;
- (char)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;

@end
