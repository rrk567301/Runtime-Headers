@class NSImage, NSArray, NSString;

@interface FRToolbarButton : NSButton

@property (readonly, nonatomic) NSImage *icon;
@property (readonly, nonatomic) NSArray *badgedIcons;
@property (readonly, nonatomic) NSString *nonAttributedTitle;
@property (nonatomic) unsigned long long badgeCount;

- (void).cxx_destruct;
- (void)setEnabled:(BOOL)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithTabBarItem:(id)a0;

@end
