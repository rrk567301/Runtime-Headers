@class NSData, NSFileWrapper;

@interface CalArchiveFileWrapper : NSFileWrapper {
    NSData *_archiveData;
    int _archiveType;
    NSFileWrapper *_realFileWrapper;
}

- (void)finalize;
- (void)dealloc;
- (BOOL)isDirectory;
- (BOOL)isRegularFile;
- (BOOL)isSymbolicLink;
- (id)preferredFilename;
- (id)fileWrappers;
- (void)removeFileWrapper:(id)a0;
- (id)addFileWrapper:(id)a0;
- (id)keyForFileWrapper:(id)a0;
- (id)serializedRepresentation;
- (id)addRegularFileWithContents:(id)a0 preferredFilename:(id)a1;
- (BOOL)writeToFile:(id)a0 atomically:(BOOL)a1 updateFilenames:(BOOL)a2;
- (id)addFileWithPath:(id)a0;
- (id)addSymbolicLinkWithDestination:(id)a0 preferredFilename:(id)a1;
- (id)initWithData:(id)a0 archiveType:(int)a1;
- (void)getCompressedData:(id *)a0 archiveType:(int *)a1;

@end
