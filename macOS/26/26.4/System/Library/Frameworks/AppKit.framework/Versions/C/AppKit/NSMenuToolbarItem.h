@class NSString, NSView, NSImage, NSMenu;
@protocol NSMenuToolbarItemControl;

@interface NSMenuToolbarItem : NSToolbarItem {
    NSMenu *_menu;
    BOOL _showsIndicator;
    NSView<NSMenuToolbarItemControl> *_control;
    NSImage *_image;
    NSString *_title;
    id _target;
    SEL _action;
}

@property (retain) NSMenu *menu;
@property BOOL showsIndicator;

- (id)image;
- (void)setAction:(SEL)a0;
- (SEL)action;
- (void)validate;
- (void)setTitle:(id)a0;
- (void)setTarget:(id)a0;
- (void)setImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)title;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)target;
- (void)_configureControlRepresentation;
- (id)_imageToDisplay;
- (void)_performAction:(id)a0;
- (BOOL)_isCustomItemType;
- (void)_setControlSizeAndFontForDisplayMode:(unsigned long long)a0 sizeMode:(unsigned long long)a1;
- (BOOL)_validatesWithoutPrimaryAction;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (id)menuFormRepresentation;

@end
