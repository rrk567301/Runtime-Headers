@class NSObject, NSMutableDictionary, PDFRenderingProperties;
@protocol PDFPageBackgroundManagerDelegate, OS_dispatch_queue;

@interface PDFPageBackgroundManager : NSObject <PDFPageDrawProgressCallback> {
    id<PDFPageBackgroundManagerDelegate> _documentDelegate;
    PDFRenderingProperties *_renderingProperties;
    unsigned long long _activePageIndex;
    NSMutableDictionary *_backgroundImageCache[3];
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _isCancled;
    BOOL _isWorking;
    BOOL _willForceUpdate;
}

- (void)_clear;
- (void)_cleanup;
- (void)_update;
- (void)dealloc;
- (void)cancel;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (void)willForceUpdate;
- (void)_drawPageImage:(unsigned long long)a0 forQuality:(int)a1;
- (BOOL)_expectedQualityIndexForPageIndex:(unsigned long long)a0 forQuality:(int *)a1;
- (BOOL)_findPageIndexNeedingUpdate:(unsigned long long *)a0 forQuality:(int *)a1;
- (void)_shiftImagesAtIndex:(unsigned long long)a0 downwards:(BOOL)a1;
- (id)backgroundImageForPageIndex:(unsigned long long)a0 withFoundQuality:(int *)a1;
- (void)didInsertPageAtIndex:(unsigned long long)a0;
- (void)didRemovePageAtIndex:(unsigned long long)a0;
- (void)didSwapPageAtIndex:(unsigned long long)a0 withIndex:(unsigned long long)a1;
- (BOOL)drawProgressCallback;
- (void)forceSetBackgroundImage:(id)a0 forPageIndex:(unsigned long long)a1;
- (void)forceUpdateActivePageIndex:(unsigned long long)a0 withMaxDuration:(double)a1;
- (id)initWithDelegate:(id)a0 andRenderingProperties:(id)a1;
- (void)updateActivePageIndex:(unsigned long long)a0;

@end
