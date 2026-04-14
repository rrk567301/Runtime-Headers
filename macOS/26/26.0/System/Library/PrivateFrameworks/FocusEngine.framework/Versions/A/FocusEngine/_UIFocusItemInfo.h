@class NSArray, _UIFocusRegion;
@protocol UIFocusItem;

@interface _UIFocusItemInfo : NSObject <NSCopying> {
    struct { unsigned char hasResolvedFocusTouchSensitivityStyle : 1; unsigned char hasResolvedFocusMovementFlippedHorizontally : 1; unsigned char hasResolvedFocusedRegion : 1; unsigned char hasResolvedRotaryFocusMovementAxis : 1; unsigned char useFallbackAncestorScroller : 1; } _flags;
}

@property (readonly, weak, nonatomic) id<UIFocusItem> item;
@property (readonly, copy, nonatomic) NSArray *ancestorEnvironmentScrollableContainers;
@property (readonly, nonatomic) long long inheritedFocusMovementStyle;
@property (readonly, nonatomic) long long focusTouchSensitivityStyle;
@property (readonly, nonatomic) long long rotaryFocusMovementAxis;
@property (readonly, nonatomic) BOOL useFallbackAncestorScroller;
@property (readonly, nonatomic, getter=isFocusMovementFlippedHorizontally) BOOL focusMovementFlippedHorizontally;
@property (readonly, nonatomic) _UIFocusRegion *focusedRegion;

+ (id)infoWithItem:(id)a0;
+ (id)infoWithItem:(id)a0 useFallbackAncestorScroller:(BOOL)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)shortDescription;
- (void).cxx_destruct;
- (id)_createFocusedRegion;
- (id)_initWithItem:(id)a0 useFallbackAncestorScroller:(BOOL)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusedRectInCoordinateSpace:(id)a0;
- (void)invalidateFocusedRegion;

@end
