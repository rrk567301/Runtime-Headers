@class NSShadow, VUITextLayout, NSArray, NSString, NSColor;

@interface VUIMediaTagsViewLayout : NSObject

@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) VUITextLayout *textLayout;
@property (readonly, nonatomic) VUITextLayout *rentalExpirationTextLayout;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } margin;
@property (retain, nonatomic) NSColor *backgroundColor;
@property (retain, nonatomic) NSShadow *shadow;
@property (readonly, nonatomic) NSArray *groupedKeys;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } groupMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } commonSenseMargin;
@property (readonly, nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } tomatoMeterMargin;
@property (retain, nonatomic) NSString *compositingFilter;
@property (nonatomic) double maxWidth;
@property (nonatomic) BOOL centerAlign;
@property (readonly, nonatomic, getter=isWrappingAllowed) BOOL wrappingAllowed;
@property (nonatomic) BOOL alignBadgeVertically;
@property (nonatomic) double badgeMaxHeight;
@property (nonatomic) struct NSEdgeInsets { double top; double left; double bottom; double right; } badgeMargin;
@property (retain, nonatomic) NSColor *badgeTintColor;
@property (readonly, nonatomic, getter=isGroupActivityTagEnabled) BOOL groupActivityTagEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)a0;

@end
