@class NSMutableDictionary, NSView, NSString, NSPopUpButton, NSMenuItem;

@interface NSColorPickerUser : NSColorPicker <NSColorPickingCustom> {
    id tiffView;
    id reserved1;
    id renamePanelController;
    NSPopUpButton *palettePopUpButton;
    id reserved2;
    id optionsPopUp;
    char bScaleOrNot;
    NSMutableDictionary *imageDictionary;
    id paste;
    id renameField;
    id defaultTiffImage;
    id removeField;
    NSString *currImageName;
    NSMenuItem *spectrumMenuItem;
}

@property (retain) NSView *userPickerView;

- (void)dealloc;
- (long long)currentMode;
- (void)remove:(id)a0;
- (void)setColor:(id)a0;
- (double)_insertionOrder;
- (void)rename:(id)a0;
- (id)provideNewView:(char)a0;
- (char)saveImageNamed:(id)a0 andShowWarnings:(char)a1;
- (void)_addImage:(id)a0 named:(id)a1;
- (id)_imageFromItemTitle:(id)a0;
- (id)_newImageName:(id)a0;
- (void)_open:(id)a0;
- (void)_open:(id)a0 fromImage:(id)a1 withName:(id)a2;
- (id)_popUpButton;
- (void)_remove:(id)a0;
- (char)_removeOrRename:(id)a0;
- (void)_rename:(id)a0;
- (void)_restoreMode;
- (void)_saveMode;
- (void)_setCurrImageName:(id)a0;
- (id)_shortNameFor:(id)a0;
- (void)_switchImage:(id)a0 andUpdateColor:(char)a1;
- (id)buttonToolTip;
- (void)copy:(id)a0;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (void)open:(id)a0;
- (void)paste:(id)a0;
- (char)supportsMode:(long long)a0;
- (void)switchImage:(id)a0;
- (id)validateRename;
- (char)worksWhenModal;

@end
