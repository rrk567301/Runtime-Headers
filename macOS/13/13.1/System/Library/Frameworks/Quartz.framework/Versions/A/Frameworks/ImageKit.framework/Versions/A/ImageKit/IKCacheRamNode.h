@class NSString, NSBitmapImageRep, IKCacheNode, NSData;

@interface IKCacheRamNode : IKLinkedListLink <IKImageProxy> {
    IKCacheNode *_parent;
    unsigned int _cacheUsedByBitmapRep;
    unsigned int _cacheUsedByJpegData;
    unsigned int _session;
    int _rawDataFormat;
    BOOL _isInPriorityList;
    NSBitmapImageRep *_bitmapRep;
    NSData *_data;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)init;
- (id)data;
- (void)setData:(id)a0;
- (id)parent;
- (unsigned int)session;
- (void)setSession:(unsigned int)a0;
- (void)setParent:(id)a0;
- (id)bitmap;
- (id)thumbnailWithSize:(double)a0 antialiased:(BOOL)a1 quality:(int)a2;
- (BOOL)isVectorial;
- (void)willDie;
- (int)proxyDataFormat;
- (id)proxyData;
- (id)proxyImage;
- (id)proxyReferenceInstance;
- (struct CGSize { double x0; double x1; })proxySize;
- (BOOL)supportConcurrentLoading;
- (unsigned int)cacheUsedByBitmapRep;
- (void)setCacheUsedByBitmapRep:(unsigned int)a0;
- (unsigned int)cacheUsedByJpegData;
- (void)setCacheUsedByJpegData:(unsigned int)a0;
- (int)rawDataFormat;
- (void)setRawDataFormat:(int)a0;
- (BOOL)isInPriorityList;
- (void)setIsInPriorityList:(BOOL)a0;
- (unsigned int)totalCacheUsed;
- (void)setBitmap:(id)a0;

@end
