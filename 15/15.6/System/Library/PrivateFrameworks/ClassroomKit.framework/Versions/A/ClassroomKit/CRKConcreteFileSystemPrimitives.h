@class NSOperationQueue, NSFileManager, NSURL;

@interface CRKConcreteFileSystemPrimitives : NSObject <CRKFileSystemPrimitives>

@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) NSOperationQueue *accessQueue;
@property (readonly, nonatomic) NSURL *temporaryDirectoryURL;

+ (char)isNoSuchFileError:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (char)copyItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (char)removeItemAtURL:(id)a0 error:(id *)a1;
- (char)moveItemAtURL:(id)a0 toURL:(id)a1 error:(id *)a2;
- (id)contentsOfDirectoryAtURL:(id)a0 error:(id *)a1;
- (char)fileExistsAtURL:(id)a0;
- (id)dataWithContentsOfURL:(id)a0 error:(id *)a1;
- (id)resourcesDirectoryURLForBundle:(id)a0;
- (id)URLFromBookmarkData:(id)a0 error:(id *)a1;
- (id)URLsForResourcesWithExtension:(id)a0 inBundle:(id)a1;
- (id)bookmarkDataForURL:(id)a0 error:(id *)a1;
- (void)coordinateCopyWithActionPairs:(id)a0 completion:(id /* block */)a1;
- (void)coordinateMoveWithActionPairs:(id)a0 completion:(id /* block */)a1;
- (id)dispatchSourceForFileDescriptor:(id)a0 options:(unsigned long long)a1;
- (id)emptyDirectoryNode;
- (char)makeDirectoryAtURL:(id)a0 error:(id *)a1;
- (id)nodeForURL:(id)a0 error:(id *)a1;
- (id)openURL:(id)a0 options:(int)a1 error:(id *)a2;
- (id)promisedResourceValuesForKeys:(id)a0 fromURL:(id)a1 error:(id *)a2;
- (void)removeCoordinatedItemsAtURLs:(id)a0 completion:(id /* block */)a1;
- (id)resourceValuesForKeys:(id)a0 fromURL:(id)a1 error:(id *)a2;
- (char)setResources:(id)a0 onURL:(id)a1 error:(id *)a2;
- (char)startAccessingBookmarkURL:(id)a0;
- (void)stopAccessingBookmarkURL:(id)a0;
- (char)writeData:(id)a0 toURL:(id)a1 options:(unsigned long long)a2 error:(id *)a3;

@end
