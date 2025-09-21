@class EFPathComponent;

@interface EFFileWrapper : NSFileWrapper

@property (retain, nonatomic) EFPathComponent *preferredFilenamePathComponent;
@property (retain, nonatomic) EFPathComponent *filenamePathComponent;

- (id)filename;
- (void)setFilename:(id)a0;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 error:(id *)a2;
- (id)init;
- (id)initWithSerializedRepresentation:(id)a0;
- (void).cxx_destruct;
- (id)initDirectoryWithFileWrappers:(id)a0;
- (id)initRegularFileWithContents:(id)a0;
- (id)preferredFilename;
- (void)setPreferredFilename:(id)a0;

@end
