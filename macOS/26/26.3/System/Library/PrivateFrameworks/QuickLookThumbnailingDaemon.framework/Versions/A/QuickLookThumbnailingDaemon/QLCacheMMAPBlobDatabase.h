@class NSString, _QLCacheThread, QLCacheFragHandler, NSMutableArray;

@interface QLCacheMMAPBlobDatabase : NSObject {
    NSString *_path;
    QLCacheFragHandler *_fragHandler;
    int _file;
    void *_vmFile;
    NSMutableArray *_reservedBuffers;
}

@property (weak) _QLCacheThread *cacheThread;
@property (readonly) unsigned long long maxSize;
@property (readonly) unsigned long long size;
@property (readonly) float fragmentation;

- (void)save;
- (BOOL)doesExist;
- (id)cacheHolesOrderedByStart;
- (void)close;
- (id)initWithPath:(id)a0 cacheSize:(long long)a1 cacheThread:(id)a2;
- (BOOL)isOpen;
- (void)open;
- (id)checkConsistency:(id)a0;
- (id)copyBlobWithInfo:(id)a0;
- (void)compactFragmentation;
- (id)reserveBufferWithLength:(unsigned long long)a0;
- (void)validateReservedBufferWithBlobInfo:(id)a0;
- (void).cxx_destruct;
- (void *)bufferPointedToByBlobInfo:(id)a0;
- (void)reset;
- (void)discardReservedBufferWithBlobInfo:(id)a0;
- (BOOL)deleteBlobWithInfo:(id)a0;
- (void)markPurgeable;
- (BOOL)deleteBlobsWithArray:(id)a0;
- (BOOL)isValid;

@end
