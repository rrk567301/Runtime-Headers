@class NSRecursiveLock, NSSet, NSMutableDictionary, NSMutableSet, NSDate;

@interface KHLayoutThumbnailInfo : NSObject {
    NSMutableDictionary *_imagesBySize;
    NSRecursiveLock *_requestsLock;
    NSMutableSet *_requests;
}

@property (readonly) NSSet *requests;
@property (retain) NSDate *modificationDate;
@property BOOL fullResolutionRequested;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void)setObject:(id)a0 atIndexedSubscript:(unsigned long long)a1;
- (void)dealloc;
- (void)invalidate;
- (void)addRequest:(id)a0;
- (id)init;
- (void)removeRequest:(id)a0;
- (void).cxx_destruct;
- (void)setThumbnail:(id)a0 forSize:(unsigned long long)a1;
- (id)thumbnailForSize:(unsigned long long)a0;

@end
