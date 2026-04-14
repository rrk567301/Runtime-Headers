@class NSString, NSData, NSURL, NSFileHandle;

@interface GEOTileData : NSObject <GEOXPCSerializable> {
    NSData *_data;
    NSFileHandle *_fileHandle;
    long long _sandboxExtension;
    unsigned long long _cachedFileSize;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    int _fileDescriptor;
    BOOL _isDir;
    BOOL _isTemporary;
    BOOL _unlinkWhenDone;
    BOOL _hasCustomMemoryCacheCost;
    unsigned long long _memoryCacheCost;
}

@property (nonatomic) unsigned long long memoryCacheCost;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) id decodedRepresentation;
@property (readonly, nonatomic) BOOL hasFileDescriptor;
@property (readonly, nonatomic) unsigned long long length;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFileURL:(id)a0;
- (void)_replaceFileURL:(id)a0 isTemporary:(BOOL)a1 unlinkWhenDone:(BOOL)a2;
- (int)consumeFileDescriptor;
- (id)initWithData:(id)a0;
- (void)encodeToXPCDictionary:(id)a0;
- (id)init;
- (unsigned long long)_locked_length;
- (id)initWithDecodedRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initWithFileURL:(id)a0 convertToFileDescriptor:(BOOL)a1;
- (id)initWithFileHandle:(id)a0;
- (id)initWithXPCDictionary:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)readDataWithError:(id *)a0;
- (id)copyWithoutURL;
- (BOOL)isEqual:(id)a0;
- (id)initWithTemporaryFileURL:(id)a0 unlinkWhenDone:(BOOL)a1;
- (id)_locked_readDataWithOptions:(unsigned long long)a0 error:(id *)a1;
- (id)readDataWithOptions:(unsigned long long)a0 error:(id *)a1;

@end
