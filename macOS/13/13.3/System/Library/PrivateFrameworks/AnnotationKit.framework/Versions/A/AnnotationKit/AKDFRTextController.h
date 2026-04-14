@class AKDFRTextAttributesViewController, NSCustomTouchBarItem, AKDFRTextColorController, NSColorPickerTouchBarItem, NSPopoverTouchBarItem;

@interface AKDFRTextController : AKDFRAnnotationPropertiesController

@property (retain) NSPopoverTouchBarItem *textAttributesItem;
@property (retain) NSColorPickerTouchBarItem *textColorPopoverItem;
@property (retain) NSCustomTouchBarItem *textAttributesContentItem;
@property (retain) AKDFRTextColorController *textColorPickerController;
@property (readonly) AKDFRTextAttributesViewController *textAttributesViewController;

- (void).cxx_destruct;
- (id)touchBar:(id)a0 makeItemForIdentifier:(id)a1;
- (id)itemIdentifiers;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)colorPickerAction:(id)a0;

@end
