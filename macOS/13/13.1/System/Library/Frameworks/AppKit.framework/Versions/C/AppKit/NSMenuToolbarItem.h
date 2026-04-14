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
- (id)target;
- (void)setTarget:(id)a0;
- (void)setAction:(SEL)a0;
- (void)setTitle:(id)a0;
- (void)setImage:(id)a0;
- (SEL)action;
- (id)image;
- (id)title;
- (id)initWithItemIdentifier:(id)a0;
- (void)configureForDisplayMode:(unsigned long long)a0 andSizeMode:(unsigned long long)a1;
- (void)_performAction:(id)a0;
- (BOOL)_isCustomItemType;
- (void)_configureControlRepresentation;
- (void)_setControlSizeAndFontForDisplayMode:(unsigned long long)a0 sizeMode:(unsigned long long)a1;
- (id)menuFormRepresentation;
- (id)_imageToDisplay;
- (void)validate;

@end
