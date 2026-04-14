@class NSImageView, NSString, NSImage, NSSegmentedCell, NSMenu, NSSegmentItemView, NSMutableArray;

@interface NSSegmentItem : NSObject <NSCopying, NSCoding> {
    double _width;
    NSImage *_image;
    NSString *_label;
    NSMenu *_menu;
    struct { unsigned char needsRecalc : 1; unsigned char selected : 1; unsigned char disabled : 1; unsigned char showMenuIndicator : 1; unsigned char mouseInside : 1; unsigned char inactiveStateDisablesRollovers : 1; unsigned char imageScaling : 2; unsigned char showsBadge : 1; unsigned char springLoadingHighlight : 2; unsigned char animating : 1; unsigned char alignment : 3; unsigned int reserved : 17; } _flags;
    NSImage *_alternateImage;
    NSSegmentedCell *_owningCell;
    NSMutableArray *_segmentItems;
    long long _selectedSegment;
    long long _keySegment;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
    struct { unsigned char trackingMode : 3; unsigned char trimmedLabels : 1; unsigned char drawing : 1; unsigned char reserved1 : 2; unsigned char recalcToolTips : 1; unsigned char usesWindowsStyle : 1; unsigned char dontShowSelectedAndPressedAppearance : 1; unsigned char menuShouldBeUniquedAgainstMain : 1; unsigned char style : 8; unsigned char flatMinX : 1; unsigned char flatMaxX : 1; unsigned char segmentedSeparated : 1; unsigned char animateNextLayout : 1; unsigned short reserved : 9; } _seFlags;
    id _menuUniquer;
}

@property (setter=_setWidth:) double width;
@property (retain, getter=_image, setter=_setImage:) NSImage *image;
@property (copy, getter=_label, setter=_setLabel:) NSString *label;
@property (retain, getter=_menu, setter=_setMenu:) NSMenu *menu;
@property (copy) NSString *toolTip;
@property long long tag;
@property (readonly, getter=_needsRecalc) BOOL needsRecalc;
@property (getter=_selected, setter=_setSelected:) BOOL selected;
@property (getter=_disabled, setter=_setDisabled:) BOOL disabled;
@property (getter=_showMenuIndicator, setter=_setShowMenuIndicator:) BOOL showMenuIndicator;
@property (getter=_mouseInside, setter=_setMouseInside:) BOOL mouseInside;
@property (getter=_inactiveStateDisablesRollovers, setter=_setInactiveStateDisablesRollovers:) BOOL inactiveStateDisablesRollovers;
@property (getter=_imageScaling, setter=_setImageScaling:) unsigned long long imageScaling;
@property (getter=_showsBadge, setter=_setShowsBadge:) BOOL showsBadge;
@property (getter=_springLoadingHighlight, setter=_setSpringLoadingHighlight:) long long springLoadingHighlight;
@property (retain, getter=_alternateImage, setter=_setAlternateImage:) NSImage *alternateImage;
@property (readonly, getter=_badgeEmblem) NSImage *badgeEmblem;
@property (readonly, getter=_displayWidth) double displayWidth;
@property (readonly, getter=_fullWidth) double fullWidth;
@property (getter=_shrinkage, setter=_setShrinkage:) double shrinkage;
@property (readonly, getter=_imageRect) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } imageRect;
@property (readonly, getter=_labelRect) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } labelRect;
@property (readonly, getter=_menuIndRect) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } menuIndRect;
@property long long toolTipTag;
@property long long index;
@property (retain) NSSegmentItemView *segmentItemView;
@property (retain, getter=_badgeView, setter=_setBadgeView:) NSImageView *badgeView;
@property (getter=_badgeValue, setter=_setBadgeValue:) long long badgeValue;
@property long long alignment;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_setNeedsRecalc;
- (void)_setToolTipTag:(long long)a0;
- (void)_setOwningCell:(id)a0;
- (id)_auxiliaryStorage;
- (id)_badgeEmblemForValue:(long long)a0;
- (void)_recalcRectsForCell:(id)a0;
- (long long)_toolTipTag;
- (BOOL)disabled;
- (void)setDisabled:(BOOL)a0;
- (id)view:(id)a0 stringForToolTip:(long long)a1 point:(struct CGPoint { double x0; double x1; })a2 userData:(void *)a3;

@end
