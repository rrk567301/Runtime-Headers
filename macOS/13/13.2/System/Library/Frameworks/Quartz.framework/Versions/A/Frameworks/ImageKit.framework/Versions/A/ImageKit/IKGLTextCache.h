@class IKLinkedListNodePool, NSMutableDictionary, IKLinkedList;

@interface IKGLTextCache : NSObject {
    NSMutableDictionary *_cachedStrings;
    struct __CFDictionary { } *_perSizeCaches;
    struct CGSize { double width; double height; } _size;
    double _scaleFactor;
    IKLinkedList *_listOfCachedInfo;
    IKLinkedListNodePool *_nodePool;
    unsigned int _session;
}

- (void)dealloc;
- (void)finalize;
- (struct CGSize { double x0; double x1; })size;
- (void)empty;
- (unsigned long long)pageCount;
- (void)storeText:(id)a0;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1;
- (long long)segmentHeightForFontSize:(int)a0;
- (id)cachesForSize:(int)a0;
- (id)_generateCachePageForSize:(int)a0 pageIndex:(unsigned int *)a1;
- (id)cacheForSize:(int)a0 page:(unsigned int)a1;
- (void)_cleanupCacheStackWithSize:(int)a0 page:(unsigned int)a1;
- (void)removeTextNode:(id)a0;
- (BOOL)purgeItemsOutOfDate;
- (id)cachedTextForText:(id)a0;
- (void)bumpSession;
- (unsigned long long)cacheStringCount;

@end
