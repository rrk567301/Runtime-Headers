@class NSString;

@interface SKGArchiver : NSObject

@property (copy, nonatomic) NSString *resourcePath;

- (void).cxx_destruct;
- (id)archivePaths;
- (id)archiverResourcePath;
- (BOOL)enumerateArchivePathsUsingBlock:(id /* block */)a0;
- (id)initWithResourceDirectoryPath:(id)a0;
- (BOOL)removeArchivePath:(id)a0 error:(id *)a1;
- (BOOL)writeArchive:(id)a0 name:(id)a1 error:(id *)a2;

@end
