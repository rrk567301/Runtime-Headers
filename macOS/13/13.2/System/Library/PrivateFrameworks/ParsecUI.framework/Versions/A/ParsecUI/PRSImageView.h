@class NSString;

@interface PRSImageView : NSImageView <NSPasteboardItemDataProvider, NSDraggingSource>

@property (getter=isDragEnabled) BOOL dragEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)mouseDown:(id)a0;
- (BOOL)isAccessibilityElement;
- (unsigned long long)draggingSession:(id)a0 sourceOperationMaskForDraggingContext:(long long)a1;
- (void)pasteboard:(id)a0 item:(id)a1 provideDataForType:(id)a2;
- (struct CGSize { double x0; double x1; })fittingSize;

@end
