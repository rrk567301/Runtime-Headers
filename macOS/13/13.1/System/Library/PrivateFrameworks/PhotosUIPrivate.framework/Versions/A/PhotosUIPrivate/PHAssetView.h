@class NSArray, NSString, PXPhotoKitAssetView, PHAsset, PHPasteboardItemManager;

@interface PHAssetView : NSView <NSDraggingSource>

@property (nonatomic) long long contentMode;
@property (readonly, nonatomic) PHPasteboardItemManager *pasteboardManager;
@property (retain, nonatomic) PXPhotoKitAssetView *impl;
@property (retain, nonatomic) PHAsset *asset;
@property (nonatomic) BOOL allowsTextSelection;
@property (nonatomic) BOOL allowsDragging;
@property (copy, nonatomic) NSArray *stringsToHighlight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)localizedTitleForAsset:(id)a0;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)mouseDragged:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)layoutSubviews;
- (void)_commonPHAssetViewInit;

@end
