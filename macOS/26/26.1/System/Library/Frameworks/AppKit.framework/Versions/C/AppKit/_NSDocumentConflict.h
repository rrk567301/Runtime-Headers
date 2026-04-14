@class NSFileVersion, NSDocumentConflictPanelController, NSImage, QLThumbnailGenerationRequest;

@interface _NSDocumentConflict : NSObject {
    BOOL _selected;
    QLThumbnailGenerationRequest *_thumbnailGenerationRequest;
}

@property (weak) NSDocumentConflictPanelController *controller;
@property (retain) NSFileVersion *version;
@property (getter=isSelected) BOOL selected;
@property (copy) NSImage *thumbnail;
@property BOOL showName;
@property BOOL documentIsShared;

- (void)dealloc;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)nameAndDateText;
- (id)originText;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)startLoadingDocumentThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 force:(BOOL)a2;

@end
