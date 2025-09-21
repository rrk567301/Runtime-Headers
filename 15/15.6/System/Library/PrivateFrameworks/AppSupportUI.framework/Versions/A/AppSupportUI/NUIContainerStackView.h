@class NSString;
@protocol _NUIGridArrangementContainer;

@interface NUIContainerStackView : NUIContainerView <_NUIGridArrangementContainer> {
    struct _NUIGridArrangement { id<_NUIGridArrangementContainer> container; unsigned char horzDist : 8; unsigned char vertDist : 8; char baselineRelative; char hasValidMeasurement; struct vector<_NUIGridArrangementCell, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__begin_; struct _NUIGridArrangementCell *__end_; struct __compressed_pair<_NUIGridArrangementCell *, std::allocator<_NUIGridArrangementCell>> { struct _NUIGridArrangementCell *__value_; } __end_cap_; } cells; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } columns; struct vector<_NUIGridArrangementDimension, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__begin_; struct _NUIGridArrangementDimension *__end_; struct __compressed_pair<_NUIGridArrangementDimension *, std::allocator<_NUIGridArrangementDimension>> { struct _NUIGridArrangementDimension *__value_; } __end_cap_; } rows; struct vector<CGRect, std::allocator<CGRect>> { struct CGRect *__begin_; struct CGRect *__end_; struct __compressed_pair<CGRect *, std::allocator<CGRect>> { struct CGRect *__value_; } __end_cap_; } viewFrames; } _arrangement;
    struct { unsigned short width; unsigned short height; } _visibleCount;
    struct map<NSView *, double, std::less<NSView *>, std::allocator<std::pair<NSView *const, double>>> { struct __tree<std::__value_type<NSView *, double>, std::__map_value_compare<NSView *, std::__value_type<NSView *, double>, std::less<NSView *>>, std::allocator<std::__value_type<NSView *, double>>> { void *__begin_node_; struct __compressed_pair<std::__tree_end_node<std::__tree_node_base<void *> *>, std::allocator<std::__tree_node<std::__value_type<NSView *, double>, void *>>> { struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __value_; } __pair1_; struct __compressed_pair<unsigned long, std::__map_value_compare<NSView *, std::__value_type<NSView *, double>, std::less<NSView *>>> { unsigned long long __value_; } __pair3_; } __tree_; } _customSpacings;
    struct { unsigned char alignment : 8; unsigned char distribution : 8; unsigned char axis : 4; } _stackViewFlags;
}

@property (nonatomic) long long axis;
@property (nonatomic) long long distribution;
@property (nonatomic) long long alignment;
@property (nonatomic) double spacing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)containerStackViewWithAxis:(long long)a0 arrangedSubviews:(id)a1;
+ (id)horizontalContainerStackViewWithArrangedSubviews:(id)a0;
+ (id)verticalContainerStackViewWithArrangedSubviews:(id)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)setBaselineRelativeArrangement:(char)a0;
- (double)customSpacingAfterView:(id)a0;
- (id)initWithArrangedSubviews:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setCustomSpacing:(double)a0 afterView:(id)a1;
- (id)debugDictionary;
- (void)layoutArrangedSubviewsInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)arrangedDebugDescription;
- (struct CGSize { double x0; double x1; })calculateArrangedSizeFittingSize:(struct CGSize { double x0; double x1; })a0;
- (id)calculateViewForFirstBaselineLayout;
- (id)calculateViewForLastBaselineLayout;
- (void)didRemoveArrangedSubview:(id)a0 atIndex:(long long)a1;
- (void)invalidateInternalStateForInvalidation:(long long)a0;
- (char)needsBaselineDebugBoundingBoxesForArrangedSubview:(id)a0;
- (void)populateGridArrangementCells:(void *)a0;
- (void)populateGridArrangementDimension:(void *)a0 withCells:(const void *)a1 axis:(long long)a2;
- (void)setSpacing:(double)a0 afterArrangedSubviewAtIndex:(long long)a1;

@end
