@class NSString, CalDrawOccurrenceColor;

@interface CalDrawOccurrence : NSObject

@property long long textWritingDirection;
@property (retain) CalDrawOccurrenceColor *color;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } dirtyRect;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } frame;
@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } superFrame;
@property BOOL isAllDay;
@property BOOL isBirthday;
@property BOOL isDimmed;
@property BOOL needsReply;
@property BOOL isStatusMaybe;
@property BOOL isHighlighted;
@property BOOL isSelected;
@property BOOL darkensSelection;
@property BOOL isDrafted;
@property BOOL isCancelled;
@property BOOL isLarge;
@property double fontSize;
@property (retain) NSString *title;
@property (retain) NSString *location;
@property (retain) NSString *eventTime;

+ (id)fontWithName:(id)a0 size:(double)a1;
+ (id)attributeDictionaryForFontRef:(struct __CTFont { } *)a0 lineBreakMode:(long long)a1 textNSColor:(id)a2 isCancelled:(BOOL)a3;
+ (id)fontNameWithWeight:(int)a0;
+ (struct __CTFont { } *)createFontRefWithName:(id)a0 size:(double)a1;
+ (double)lineHeightForFontRef:(struct __CTFont { } *)a0;
+ (id)attributeDictionaryForFontRef:(struct __CTFont { } *)a0 lineBreakMode:(long long)a1 textColor:(struct CGColor { } *)a2 isCancelled:(BOOL)a3;
+ (id)_fallbackFontNames;
+ (id)fontWithFontRef:(struct __CTFont { } *)a0;
+ (id)attributeDictionaryForFontRef:(struct __CTFont { } *)a0;

- (id)init;
- (void).cxx_destruct;
- (id)tileOptions;
- (id)initWithWritingDirection:(long long)a0;
- (void)invalidateMetrics;
- (void)drawRect;
- (double)borderSize;
- (id)tileOptionsWithDashes:(BOOL)a0;
- (void)resetColors;

@end
