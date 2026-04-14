@class PBDataWriter, NSString, NSOutputStream;

@interface FCKeyValueStoreWriter : NSObject

@property (readonly, nonatomic) PBDataWriter *dataWriter;
@property (readonly, nonatomic) NSString *tempFilePath;
@property (readonly, nonatomic) NSOutputStream *tempFileOutputStream;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_flushToDiskIfNeeded;
- (unsigned long long)_flushToDisk;
- (BOOL)_moveTempFileToPath:(id)a0;
- (BOOL)writeKVS:(id)a0 toFile:(id)a1 size:(unsigned long long *)a2;

@end
