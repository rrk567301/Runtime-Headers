@class NSURL, NSData, TSPObjectContext;

@interface TSPExternalReferenceDataStorage : TSPFileDataStorage {
    NSURL *_URL;
    NSData *_bookmarkData;
    char _isReachable;
    TSPObjectContext *_context;
}

- (void).cxx_destruct;
- (id)initWithURL:(id)a0;
- (char)isReadable;
- (id)bookmarkDataForArchiver:(id)a0;
- (id)initWithBookmarkData:(id)a0 context:(id)a1;
- (void)performReadWithAccessor:(id /* block */)a0;
- (char)archiveInfoMessage:(void *)a0 archiver:(id)a1 packageWriter:(id)a2;
- (unsigned long long)materializedLength;

@end
