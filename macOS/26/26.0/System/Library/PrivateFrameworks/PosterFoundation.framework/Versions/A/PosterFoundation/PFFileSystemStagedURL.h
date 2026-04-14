@class PFFileSystemEndpoint, NSFileManager;

@interface PFFileSystemStagedURL : NSObject {
    id /* block */ _commitHandler;
}

@property (readonly, nonatomic) PFFileSystemEndpoint *endpoint;
@property (retain) NSFileManager *fileManager;

+ (id)new;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)archiveObjectUsingNSKeyedArchiver:(id)a0 toEndpoint:(id)a1;
+ (BOOL)commitStagedURLs:(id)a0 destinationURL:(id)a1 error:(out id *)a2;
+ (BOOL)commitStagedURLs:(id)a0 destinationURL:(id)a1 stagingURL:(id)a2 fileManager:(id)a3 error:(out id *)a4;
+ (BOOL)commitStagedURLs:(id)a0 destinationURLsForSwap:(id)a1 stagingURLsForSwap:(id)a2 stagingURL:(id)a3 fileManager:(id)a4 error:(out id *)a5;
+ (id)copyPath:(id)a0 toEndpoint:(id)a1;
+ (id)copyURL:(id)a0 toEndpoint:(id)a1;
+ (id)stageCreateEndpoint:(id)a0;
+ (id)stageDeleteEndpoint:(id)a0;
+ (id)writeData:(id)a0 toEndpoint:(id)a1;

- (id)init;
- (void).cxx_destruct;
- (id)initWithEndpoint:(id)a0 commitHandler:(id /* block */)a1;
- (BOOL)commitRelativeToURL:(id)a0 error:(out id *)a1;

@end
