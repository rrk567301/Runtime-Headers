@class GSStorageManager;

@interface FPGSStorageManager : NSObject {
    GSStorageManager *_gs;
}

- (void).cxx_destruct;
- (id)init;
- (id)permanentStorageForItemAtURL:(id)a0 allocateIfNone:(BOOL)a1 error:(id *)a2;
- (id)permanentStorageForItemWithDocID:(unsigned int)a0 deviceID:(int)a1 allocateIfNone:(BOOL)a2 error:(id *)a3;

@end
