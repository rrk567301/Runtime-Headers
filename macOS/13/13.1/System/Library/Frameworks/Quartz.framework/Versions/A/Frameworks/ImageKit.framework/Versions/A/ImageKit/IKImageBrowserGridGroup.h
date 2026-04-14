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

- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)setTitle:(id)a0;
- (int)style;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setStyle:(int)a0;
- (id)title;
- (BOOL)animating;
- (void)setHighlighted:(BOOL)a0;
- (void)setAlpha:(float)a0;
- (BOOL)highlighted;
- (float)alpha;
- (BOOL)selected;
- (void)setSelected:(BOOL)a0;
- (BOOL)expanded;
- (void)setExpanded:(BOOL)a0;
- (id)bgColor;
- (void)setBgColor:(id)a0;
- (BOOL)hasHeader;
- (void)setAnimating:(BOOL)a0;
- (id)collapsedIndexesWithColumnCount:(unsigned long long)a0;
- (id)headLayer;
- (void)setHeadLayer:(id)a0;
- (id)tailLayer;
- (void)setTailLayer:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })transformedRange;
- (void)setTransformedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeToParent;
- (void)setRangeToParent:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (int)ghostCellCountOnTheLeft;
- (void)setGhostCellCountOnTheLeft:(int)a0;
- (int)ghostCellCountOnTheRight;
- (void)setGhostCellCountOnTheRight:(int)a0;
- (BOOL)supportsHorizontalScrolling;
- (BOOL)hasSubLayout;
- (BOOL)hasFloatingHeader;
- (BOOL)drawBezelOnDragOver;
- (BOOL)hasSubLayoutWhenCollapsed;
- (BOOL)hasCoverflow;

@end
