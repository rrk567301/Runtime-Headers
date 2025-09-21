@class UIColor, NSArray;

@interface RTIAssistantItem : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) char visibleWhenMinimized;
@property (nonatomic) char showsBarButtonItemsInline;
@property (nonatomic) char showsInputDashboardViewController;
@property (nonatomic) float centerViewPreferredWidth;
@property (retain, nonatomic) UIColor *detachedTintColor;
@property (retain, nonatomic) UIColor *detachedBackgroundColor;
@property (retain, nonatomic) NSArray *leadingBarButtonGroups;
@property (retain, nonatomic) NSArray *trailingBarButtonGroups;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
