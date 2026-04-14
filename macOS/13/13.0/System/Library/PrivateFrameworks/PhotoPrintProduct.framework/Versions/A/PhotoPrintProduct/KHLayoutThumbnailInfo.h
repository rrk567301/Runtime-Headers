@class NSRecursiveLock, NSSet, NSMutableDictionary, NSMutableSet, NSDate;

@interface KHLayoutThumbnailInfo : NSObject {
    NSMutableDictionary *_imagesBySize;
    NSRecursiveLock *_requestsLock;
    NSMutableSet *_requests;
}

@property (readonly) NSSet *requests;
@property (retain) NSDate *modificationDate;
@property BOOL fullResolutionRequested;

- (void)dealloc;
- (id)init;
- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)invalidate;
- (void).cxx_destruct;
- (void)addRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (id)thumbnailForSize:(unsigned long long)a0;
- (void)setThumbnail:(id)a0 forSize:(unsigned long long)a1;

@end
