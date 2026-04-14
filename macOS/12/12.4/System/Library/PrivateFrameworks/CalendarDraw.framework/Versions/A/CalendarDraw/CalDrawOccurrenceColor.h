@class NSColor, CalDrawColorKey;

@interface CalDrawOccurrenceColor : NSObject {
    struct CGColor { } *_baseColor;
    struct CGColor { } *_foregroundColor;
}

@property (retain, nonatomic) NSColor *selectedTextColor;
@property (retain) CalDrawColorKey *colorKey;

+ (id)adjustedUIOccurrenceColorForUnadjustedCalendarColor:(id)a0 appearance:(id)a1;
+ (id)colorForCGColor:(struct CGColor { } *)a0;
+ (id)styleStringForCGColor:(struct CGColor { } *)a0;
+ (id)adjustedOccurrenceColor:(id)a0 darkBackground:(BOOL)a1;
+ (id)_getCacheForAppearance:(id)a0;
+ (id)adjustedOccurrenceColor:(id)a0 forAppearance:(id)a1;
+ (id)colorForCGColor:(struct CGColor { } *)a0 appearance:(id)a1;
+ (id)colorForNSColor:(id)a0 appearance:(id)a1;
+ (id)adjustedOccurrenceColor:(id)a0;
+ (id)colorForNSColor:(id)a0;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (struct CGColor { } *)baseColor;
- (struct CGColor { } *)foregroundColor;
- (void)setForegroundColor:(struct CGColor { } *)a0;
- (void)setBaseColor:(struct CGColor { } *)a0;

@end
