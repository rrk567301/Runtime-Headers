@class CNAutocompleteResult, NSString, NSImage, SOTokenField, QLPreviewMenuItem;
@protocol SOTokenAttachmentCellDelegate;

@interface SOTokenAttachmentCell : NSTokenAttachmentCell <QLPreviewMenuItemDelegate>

@property (retain, nonatomic) QLPreviewMenuItem *previewMenuItem;
@property (copy, nonatomic) NSImage *icon;
@property (readonly) SOTokenField *controlTokenField;
@property (retain, nonatomic) CNAutocompleteResult *autocompleteResult;
@property (weak, nonatomic) id<SOTokenAttachmentCellDelegate> delegate;
@property BOOL alwaysDisplayBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setRepresentedObject:(id)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)a0;
- (BOOL)accessibilityIsAttributeSettable:(id)a0;
- (id)accessibilityActionNames;
- (void)accessibilityPerformAction:(id)a0;
- (long long)interiorBackgroundStyle;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })titleRectForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (id)_textAttributes;
- (id)menuItem:(id)a0 previewItemAtPoint:(struct CGPoint { double x0; double x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })menuItem:(id)a0 itemFrameForPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)_immediateActionAnimationControllerForTokenAttachment:(id)a0 inTextView:(id)a1;
- (id)tokenTintColor;
- (BOOL)alwaysShowBackground;
- (id)controlTokenField;
- (void)updateIconWithColor:(id)a0;
- (struct CGSize { double x0; double x1; })sizeOfIcon;

@end
