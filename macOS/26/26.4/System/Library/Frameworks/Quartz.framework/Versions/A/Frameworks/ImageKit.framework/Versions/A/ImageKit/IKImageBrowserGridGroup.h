@class IKImageBrowserSubsetLayoutManager, NSColor, NSMutableDictionary;

@interface IKImageBrowserGridGroup : NSObject {
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct _NSRange { unsigned long long location; unsigned long long length; } _rangeToParent;
    struct _NSRange { unsigned long long location; unsigned long long length; } _transformedRange;
    BOOL _expanded;
    int _ghostCellCountOnTheLeft;
    int _ghostCellCountOnTheRight;
    int _groupStyle;
    NSColor *_bgColor;
    id _title;
    id _headLayer;
    id _tailLayer;
    BOOL _selected;
    BOOL _highlighted;
    BOOL _isAnimating;
    float _alpha;
    NSMutableDictionary *_attributes;
}

@property IKImageBrowserSubsetLayoutManager *grid;
@property (retain) id sourceAttributes;

- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)selected;
- (id)objectForKey:(id)a0;
- (void)setTitle:(id)a0;
- (void)setSelected:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setStyle:(int)a0;
- (int)style;
- (void)setHighlighted:(BOOL)a0;
- (BOOL)expanded;
- (id)title;
- (void)setAnimating:(BOOL)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (BOOL)hasHeader;
- (id)init;
- (BOOL)highlighted;
- (void)setAlpha:(float)a0;
- (float)alpha;
- (void)setExpanded:(BOOL)a0;
- (void)dealloc;
- (BOOL)animating;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (id)collapsedIndexesWithColumnCount:(unsigned long long)a0;
- (BOOL)drawBezelOnDragOver;
- (int)ghostCellCountOnTheLeft;
- (int)ghostCellCountOnTheRight;
- (BOOL)hasCoverflow;
- (BOOL)hasFloatingHeader;
- (BOOL)hasSubLayout;
- (BOOL)hasSubLayoutWhenCollapsed;
- (id)headLayer;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeToParent;
- (void)setGhostCellCountOnTheLeft:(int)a0;
- (void)setGhostCellCountOnTheRight:(int)a0;
- (void)setHeadLayer:(id)a0;
- (void)setRangeToParent:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setTailLayer:(id)a0;
- (void)setTransformedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)supportsHorizontalScrolling;
- (id)tailLayer;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transformedRange;

@end
