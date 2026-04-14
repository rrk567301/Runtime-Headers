@class NSData, NSFileWrapper;

@interface ICNFMCArchiveFileWrapper : NSFileWrapper {
    NSFileWrapper *_realFileWrapper;
}

@property (retain, nonatomic) NSData *archiveData;
@property (nonatomic) long long archiveType;
@property (readonly, nonatomic) NSFileWrapper *realFileWrapper;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isDirectory;
- (BOOL)isSymbolicLink;
- (BOOL)isRegularFile;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)preferredFilename;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)serializedRepresentation;
- (id)addFileWrapper:(id)a0;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (void)removeFileWrapper:(id)a0;
- (id)fileWrappers;
- (id)keyForFileWrapper:(id)a0;
- (unsigned long long)approximateSize;
- (id)initWithData:(id)a0 archiveType:(long long)a1;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 compressionLevel:(long long)a2 error:(id *)a3;
- (void)_archiveFileWrapperCommonInit;
- (void)getCompressedData:(id *)a0 archiveType:(long long *)a1;

@end
