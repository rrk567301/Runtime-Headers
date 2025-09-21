@class NSURL, NSString;

@interface DCArchiveWriter : NSObject {
    struct archive { } *_archive;
}

@property (retain, nonatomic) NSURL *destinationURL;
@property (retain, nonatomic) NSString *basePath;
@property (nonatomic) char usesCompression;
@property (nonatomic) char flatten;
@property (copy, nonatomic) NSString *flattenFolderName;

- (void)dealloc;
- (void).cxx_destruct;
- (char)finish:(id *)a0;
- (char)open:(id *)a0;
- (id)initWithDestinationURL:(id)a0 baseURL:(id)a1;
- (char)writeURL:(id)a0 isDirectory:(char)a1 error:(id *)a2;
- (char)writeURLs:(id)a0 error:(id *)a1;

@end
