@class NSString, NSImage, NSArray, NSAttributedString, NSColor;

@interface NSTabBarItem : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy) NSString *label;
@property (copy) NSAttributedString *attributedTitle;
@property (copy) NSString *toolTip;
@property (retain) NSImage *image;
@property (copy) NSColor *themeColor;
@property (getter=isPinned) char pinned;
@property char showIcon;
@property char hideTab;
@property (copy) NSArray *accessoryViews;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
