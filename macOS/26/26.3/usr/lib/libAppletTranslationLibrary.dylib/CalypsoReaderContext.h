@class NSMutableDictionary;

@interface CalypsoReaderContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *files;

+ (id)readAllFiles:(id)a0 withFileMapping:(id)a1 debug:(BOOL)a2 error:(id *)a3;
+ (id)readBinary:(id)a0 sfi:(unsigned char)a1 error:(id *)a2;
+ (id)readRecord:(id)a0 sfi:(unsigned char)a1 index:(unsigned char)a2 recLength:(unsigned char)a3 error:(id *)a4;

- (void).cxx_destruct;
- (void)dumpAllFiles;
- (id)readAll:(id)a0 withFileMapping:(id)a1 debug:(BOOL)a2 error:(id *)a3;

@end
