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

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setTarget:(id)a0;
- (id)target;
- (SEL)action;
- (void)setImage:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setTitle:(id)a0;
- (id)image;
- (id)title;
- (id)initWithItemIdentifier:(id)a0;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (id)_imageToDisplay;
- (void)_performAction:(id)a0;
- (void)_setControlSizeAndFontForDisplayMode:(unsigned long long)a0 sizeMode:(unsigned long long)a1;
- (void)_configureControlRepresentation;
- (BOOL)_isCustomItemType;
- (id)menuFormRepresentation;
- (void)validate;

@end
