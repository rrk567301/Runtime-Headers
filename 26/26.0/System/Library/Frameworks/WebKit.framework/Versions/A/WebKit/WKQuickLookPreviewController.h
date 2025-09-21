@class NSString, NSData, QLItem;

@interface WKQuickLookPreviewController : NSObject <QLPreviewPanelDelegate, QLPreviewPanelDataSource> {
    struct RetainPtr<QLItem> { QLItem *m_ptr; } _item;
    struct RetainPtr<NSData> { NSData *m_ptr; } _imageData;
    unsigned char _activity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id).cxx_construct;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (void)beginControl:(id)a0;
- (void)closePanelIfNecessary;
- (void)endControl:(id)a0;
- (id)initWithPage:(void *)a0 imageData:(id)a1 title:(id)a2 imageURL:(id)a3 activity:(unsigned char)a4;
- (BOOL)isControlling:(id)a0;
- (long long)previewPanel:(id)a0 initialActivityForItem:(id)a1;
- (id)provideDataForItem:(id)a0;

@end
