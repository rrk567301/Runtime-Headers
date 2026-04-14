@class NSData, NSString, NSDate;

@interface NSPageData : NSData {
    NSData *data;
    NSDate *_originalFileModDate;
    NSString *_originalFilePath;
}

+ (void)initialize;
+ (long long)_umask;

- (void)dealloc;
- (id)init;
- (unsigned long long)length;
- (id)initWithBytes:(const void *)a0 length:(unsigned long long)a1;
- (const void *)bytes;
- (id)initWithContentsOfFile:(id)a0;
- (id)data;
- (id)initWithData:(id)a0;
- (id)initWithBytesNoCopy:(void *)a0 length:(unsigned long long)a1;
- (id)initWithContentsOfMappedFile:(id)a0;
- (id)initWithDataNoCopy:(id)a0;
- (void)_setOriginalFileInfoFromFileAttributes:(id)a0;
- (id)initWithContentsOfMappedFile:(id)a0 withFileAttributes:(id)a1;
- (id)_mappedFile;
- (unsigned long long)writePath:(id)a0 docInfo:(id)a1 errorHandler:(id)a2 remapContents:(BOOL)a3 hardLinkPath:(id)a4;
- (id)initFromSerializerStream:(id)a0 length:(unsigned long long)a1;
- (id)deserializer;
- (unsigned long long)writeFd:(long long)a0;
- (unsigned long long)writeFile:(id)a0;

@end
