@class NSDocumentConflictPanelController, NSFileVersion, NSImage;

@interface _NSDocumentConflict : NSObject {
    BOOL _selected;
    struct __QLThumbnail { } *_thumbnail;
}

@property NSDocumentConflictPanelController *controller;
@property (retain) NSFileVersion *version;
@property (getter=isSelected) BOOL selected;
@property (copy) NSImage *thumbnail;
@property BOOL showName;
@property BOOL documentIsShared;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (id)previewItemURL;
- (id)previewItemTitle;
- (void)startLoadingDocumentThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 force:(BOOL)a2;
- (id)originText;
- (id)nameAndDateText;

@end
