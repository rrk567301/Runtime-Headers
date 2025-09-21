@class NSString, CalDrawOccurrenceColor;

@interface CalDrawOccurrence : NSObject

@property long long textWritingDirection;
@property (retain) CalDrawOccurrenceColor *color;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dirtyRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } superFrame;
@property char isAllDay;
@property char isBirthday;
@property char isDimmed;
@property char needsReply;
@property char isStatusMaybe;
@property char isHighlighted;
@property char isSelected;
@property char darkensSelection;
@property char isDrafted;
@property char isCancelled;
@property char isLarge;
@property double fontSize;
@property (retain) NSString *title;
@property (retain) NSString *location;
@property (retain) NSString *eventTime;

+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)_fallbackFontNames;
+ (id)attributeDictionaryForFontRef:(struct __CTFont { } *)a0;
+ (id)attributeDictionaryForFontRef:(struct __CTFont { } *)a0 lineBreakMode:(long long)a1 textColor:(struct CGColor { } *)a2 strikethrough:(char)a3;
+ (id)attributeDictionaryForFontRef:(struct __CTFont { } *)a0 lineBreakMode:(long long)a1 textNSColor:(id)a2 strikethrough:(char)a3;
+ (struct __CTFont { } *)createFontRefWithName:(id)a0 size:(double)a1;
+ (id)fontNameWithWeight:(int)a0;
+ (id)fontWithFontRef:(struct __CTFont { } *)a0;
+ (double)lineHeightForFontRef:(struct __CTFont { } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)tileOptions;
- (double)borderSize;
- (void)drawRect;
- (id)initWithWritingDirection:(long long)a0;
- (void)invalidateMetrics;
- (void)resetColors;

@end
