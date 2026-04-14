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
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)initRegularFileWithContents:(id)a0;
- (id)preferredFilename;
- (id)fileWrappers;
- (void)removeFileWrapper:(id)a0;
- (id)addFileWrapper:(id)a0;
- (BOOL)writeToURL:(id)a0 options:(unsigned long long)a1 originalContentsURL:(id)a2 error:(id *)a3;
- (id)keyForFileWrapper:(id)a0;
- (id)serializedRepresentation;
- (id)initWithSerializedRepresentation:(id)a0;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initSymbolicLinkWithDestinationURL:(id)a0;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (id)initWithData:(id)a0 archiveType:(long long)a1;
- (void)getCompressedData:(id *)a0 archiveType:(long long *)a1;
- (unsigned long long)approximateSize;
- (void)_archiveFileWrapperCommonInit;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 compressionLevel:(long long)a2 error:(id *)a3;

@end
