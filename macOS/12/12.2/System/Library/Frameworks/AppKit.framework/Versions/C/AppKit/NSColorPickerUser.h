@class NSMutableDictionary, NSView, NSString, NSPopUpButton, NSMenuItem;

@interface NSColorPickerUser : NSColorPicker <NSColorPickingCustom> {
    id tiffView;
    id reserved1;
    id renamePanelController;
    NSPopUpButton *palettePopUpButton;
    id reserved2;
    id optionsPopUp;
    BOOL bScaleOrNot;
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
- (void)open:(id)a0;
- (void)copy:(id)a0;
- (void)setColor:(id)a0;
- (void)paste:(id)a0;
- (BOOL)worksWhenModal;
- (id)initWithPickerMask:(unsigned long long)a0 colorPanel:(id)a1;
- (id)buttonToolTip;
- (BOOL)supportsMode:(long long)a0;
- (id)provideNewView:(BOOL)a0;
- (void)_saveMode;
- (double)_insertionOrder;
- (void)_restoreMode;
- (void)_setCurrImageName:(id)a0;
- (id)_imageFromItemTitle:(id)a0;
- (void)_addImage:(id)a0 named:(id)a1;
- (void)_switchImage:(id)a0 andUpdateColor:(BOOL)a1;
- (void)switchImage:(id)a0;
- (id)_shortNameFor:(id)a0;
- (id)_newImageName:(id)a0;
- (BOOL)saveImageNamed:(id)a0 andShowWarnings:(BOOL)a1;
- (void)_open:(id)a0 fromImage:(id)a1 withName:(id)a2;
- (void)_open:(id)a0;
- (BOOL)_removeOrRename:(id)a0;
- (id)validateRename;
- (void)_rename:(id)a0;
- (void)_remove:(id)a0;
- (id)_popUpButton;
- (void)rename:(id)a0;

@end
