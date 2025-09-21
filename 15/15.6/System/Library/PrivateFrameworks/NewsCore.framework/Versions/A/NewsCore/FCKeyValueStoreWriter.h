@class PBDataWriter, NSString, NSOutputStream;

@interface FCKeyValueStoreWriter : NSObject

@property (readonly, nonatomic) PBDataWriter *dataWriter;
@property (readonly, nonatomic) NSString *tempFilePath;
@property (readonly, nonatomic) NSOutputStream *tempFileOutputStream;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_flushToDisk;
- (unsigned long long)_flushToDiskIfNeeded;
- (char)_moveTempFileToPath:(id)a0;
- (char)writeKVS:(id)a0 codables:(id)a1 toFile:(id)a2 size:(unsigned long long *)a3;

@end
