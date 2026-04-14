@class NSColorPickerMatrixView, NSString, NSButton, NSPopover;

@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate> {
    NSColorPickerMatrixView *_colorMatrixView;
    NSButton *_colorPanelButton;
}

@property NSColorPickerMatrixView *topBarMatrixView;
@property NSColorPickerMatrixView *colorMatrixView;
@property NSButton *colorPanelButton;
@property NSPopover *popover;
@property id delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTopBarColorList;

- (id)init;
- (void)loadView;
- (void)_showColorPanel:(id)a0;
- (void)_loadViewIfNecessary;
- (void)matrixColorPicker:(id)a0 selectedColor:(id)a1;
- (id)matrixColorPicker:(id)a0 highlightColorForColor:(id)a1;

@end
