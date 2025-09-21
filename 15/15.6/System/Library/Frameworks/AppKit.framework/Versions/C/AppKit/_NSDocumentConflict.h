@class NSDocumentConflictPanelController, NSFileVersion, NSImage;

@interface _NSDocumentConflict : NSObject {
    char _selected;
    struct __QLThumbnail { } *_thumbnailRef;
}

@property (weak) NSDocumentConflictPanelController *controller;
@property (retain) NSFileVersion *version;
@property (getter=isSelected) char selected;
@property (copy) NSImage *thumbnail;
@property char showName;
@property char documentIsShared;

- (void)dealloc;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)nameAndDateText;
- (id)originText;
- (id)previewItemTitle;
- (id)previewItemURL;
- (void)startLoadingDocumentThumbnailWithSize:(struct CGSize { double x0; double x1; })a0 scaleFactor:(double)a1 force:(char)a2;

@end
