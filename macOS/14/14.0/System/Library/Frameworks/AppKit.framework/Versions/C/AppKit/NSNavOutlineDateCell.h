@class NSString;

@interface NSNavOutlineDateCell : NSTextFieldCell {
    double _lastWidth;
    int _dateDetailLevel;
    int _todayAndYesterdayLevel;
    double _detailLevelWidths[5];
    double _detailNaturalWidths[4];
    NSString *_lastStringValue;
    unsigned char _useRelativeDates : 1;
    unsigned int _reservedDC : 31;
}

@property (nonatomic) BOOL useRelativeDates;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)setObjectValue:(id)a0;
- (double)minimumWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })expansionFrameWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_interiorBoundsToDrawWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_dateFormatterForDetailLevel:(int)a0;
- (id)_dateStringToDraw;
- (BOOL)_isValidDate:(id)a0;
- (id)_stringToDraw;
- (id)_todayStringToDrawForDate:(id)a0;
- (void)_updateDetailLevel;
- (void)_updateDetailLevelWidths;
- (id)_yesterdayStringToDrawForDate:(id)a0;
- (struct CGSize { double x0; double x1; })cellSizeForBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawInteriorWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (void)drawWithExpansionFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 inView:(id)a1;
- (unsigned long long)hitTestForEvent:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 ofView:(id)a2;
- (id)initTextCell:(id)a0;
- (void)resetDateFormats;
- (void)setFont:(id)a0;
- (void)setUseRelativeDates:(BOOL)a0;
- (BOOL)useRelativeDates;

@end
