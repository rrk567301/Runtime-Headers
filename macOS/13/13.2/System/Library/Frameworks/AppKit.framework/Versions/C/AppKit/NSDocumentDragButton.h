@class NSString, NSURL;

@interface NSDocumentDragButton : NSButton <NSDraggingSource> {
    struct __ddbFlags { unsigned char waitForDrag : 1; unsigned char currentlyDragging : 1; unsigned char shouldDrag : 1; unsigned char disableDragDelay : 1; unsigned int RESERVED : 28; } _ddbFlags;
    NSURL *representedURL;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)mouseDown:(id)a0;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)a0;
- (unsigned long long)draggingSourceOperationMaskForLocal:(BOOL)a0;
- (void)mouseDragged:(id)a0;
- (void)mouseUp:(id)a0;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (id)representedFilename;
- (void)setRepresentedFilename:(id)a0;
- (void)setDragDelayDisabled:(BOOL)a0;
- (BOOL)dragDelayDisabled;
- (void)_dragFile:(id)a0 fromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 slideBack:(BOOL)a2 event:(id)a3;
- (void)_showDragError:(int)a0 forFilename:(id)a1;
- (id)originalWindow;
- (void)_autosaveDocumentIfNeeded;
- (id)_textViewForDragging;
- (struct CGPoint { double x0; double x1; })_filenameWindowDragPoint;
- (id)_draggingItemFromPasteboardItem:(id)a0;

@end
