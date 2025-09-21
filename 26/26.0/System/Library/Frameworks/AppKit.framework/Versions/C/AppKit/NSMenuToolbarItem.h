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

- (void)setAction:(SEL)a0;
- (SEL)action;
- (void)validate;
- (void)dealloc;
- (void)setImage:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)target;
- (id)image;
- (id)title;
- (void)setTitle:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (void).cxx_destruct;
- (id)_imageToDisplay;
- (void)_configureControlRepresentation;
- (void)_performAction:(id)a0;
- (BOOL)_isCustomItemType;
- (void)_setControlSizeAndFontForDisplayMode:(unsigned long long)a0 sizeMode:(unsigned long long)a1;
- (BOOL)_validatesWithoutPrimaryAction;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (id)menuFormRepresentation;

@end
