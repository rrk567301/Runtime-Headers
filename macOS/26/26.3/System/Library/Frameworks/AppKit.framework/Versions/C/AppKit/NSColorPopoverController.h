@class NSPopover, NSColorWell, NSString, NSLayoutConstraint, NSButton, NSColorPickerMatrixView;

@interface NSColorPopoverController : NSViewController <NSColorPickerMatrixViewDelegate> {
    NSColorPickerMatrixView *_colorMatrixView;
    NSButton *_colorPanelButton;
}

@property (retain) NSColorPickerMatrixView *topBarMatrixView;
@property (retain) NSColorPickerMatrixView *colorMatrixView;
@property (retain) NSButton *colorPanelButton;
@property (retain) NSLayoutConstraint *colorPanelButtonBottomConstraint;
@property BOOL showsColorPanelButton;
@property (retain) NSPopover *popover;
@property (weak) NSColorWell *delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultTopBarColorList;

- (id)init;
- (void).cxx_destruct;
- (void)_showColorPanel:(id)a0;
- (void)awakeFromNib;
- (id)matrixColorPicker:(id)a0 highlightColorForColor:(id)a1;
- (void)matrixColorPicker:(id)a0 selectedColor:(id)a1;

@end
