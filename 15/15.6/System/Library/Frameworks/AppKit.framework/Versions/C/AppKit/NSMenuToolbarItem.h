@class NSString, NSView, NSImage, NSMenu;
@protocol NSMenuToolbarItemControl;

@interface NSMenuToolbarItem : NSToolbarItem {
    NSMenu *_menu;
    char _showsIndicator;
    NSView<NSMenuToolbarItemControl> *_control;
    NSImage *_image;
    NSString *_title;
    id _target;
    SEL _action;
}

@property (retain) NSMenu *menu;
@property char showsIndicator;

- (void)dealloc;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setTarget:(id)a0;
- (id)target;
- (void)setAction:(SEL)a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)image;
- (id)title;
- (SEL)action;
- (void)_configureControlRepresentation;
- (id)_imageToDisplay;
- (void)_performAction:(id)a0;
- (char)_isCustomItemType;
- (void)_setControlSizeAndFontForDisplayMode:(unsigned long long)a0 sizeMode:(unsigned long long)a1;
- (char)_validatesWithoutPrimaryAction;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)initWithItemIdentifier:(id)a0;
- (id)menuFormRepresentation;
- (void)validate;

@end
