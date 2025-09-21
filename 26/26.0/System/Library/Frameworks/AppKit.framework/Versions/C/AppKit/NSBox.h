@class NSString, NSView, NSFont, NSColor;
@protocol NSBoxVisualProvider;

@interface NSBox : NSView {
    struct CGSize { double width; double height; } _offsets;
    id _aux;
    BOOL _masksContentView;
    id<NSBoxVisualProvider> _visualProvider;
    NSView *_contentView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _borderRect;
    id _titleCell;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _titleRect;
    struct __bFlags { unsigned char borderType : 2; unsigned char titlePosition : 3; unsigned char backgroundTransparent : 1; unsigned char orientation : 2; unsigned char needsTile : 1; unsigned char transparent : 1; unsigned char boxType : 3; unsigned char useSuperAddSubview : 1; unsigned int _RESERVED : 18; } _bFlags;
}

@property (readonly) id<NSBoxVisualProvider> _visualProvider;
@property (readonly) unsigned long long _effectiveTitlePosition;
@property unsigned long long boxType;
@property unsigned long long titlePosition;
@property (copy) NSString *title;
@property (retain) NSFont *titleFont;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } borderRect;
@property (readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } titleRect;
@property (readonly) id titleCell;
@property struct CGSize { double x0; double x1; } contentViewMargins;
@property (retain) NSView *contentView;
@property (getter=isTransparent) BOOL transparent;
@property double borderWidth;
@property double cornerRadius;
@property (copy) NSColor *borderColor;
@property (copy) NSColor *fillColor;

+ (void)initialize;
+ (Class)_visualProviderClassForBoxType:(unsigned long long)a0;
+ (Class)_classToCheckForRequiresConstraintBasedLayout;
+ (id)defaultAnimationForKey:(id)a0;

- (BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
- (void)willRemoveSubview:(id)a0;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (void)addSubview:(id)a0;
- (BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
- (void)updateLayer;
- (id)backgroundColor;
- (void)setBackgroundColor:(id)a0;
- (struct { long long x0; unsigned long long x1; unsigned long long x2; struct CGSize { double x0; double x1; } x3; BOOL x4; })_configuration;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)encodeWithCoder:(id)a0;
- (void)_setCornerRadius:(double)a0;
- (double)_cornerRadius;
- (id)initWithCoder:(id)a0;
- (void)updateConstraints;
- (void)sizeToFit;
- (void).cxx_destruct;
- (Class)_classToCheckForWantsUpdateLayer;
- (id)_cornerConfiguration;
- (void)_directlyAddSubview:(id)a0 positioned:(long long)a1 relativeTo:(id)a2;
- (void)_invalidateConfiguration;
- (void)_layoutContentViewIfLegacy;
- (void)_refreshVisualProvider;
- (void)_setupAuxiliaryStorage;
- (void)_tile:(BOOL)a0;
- (id)_visualProviderForBoxType:(unsigned long long)a0;
- (id)accessibilityAttributeNames;
- (id)accessibilityChildrenAttribute;
- (id)accessibilityContentsAttribute;
- (id)accessibilityHelpStringForChild:(id)a0;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)accessibilityIsChildFocusable:(id)a0;
- (BOOL)accessibilityIsContentsAttributeSettable;
- (BOOL)accessibilityIsIgnored;
- (BOOL)accessibilityIsTitleUIElementAttributeSettable;
- (id)accessibilityPositionOfChild:(id)a0;
- (id)accessibilityRoleAttribute;
- (id)accessibilitySizeOfChild:(id)a0;
- (id)accessibilityTitleUIElementAttribute;
- (unsigned long long)borderType;
- (id)ns_containerWidgetType;
- (id)ns_widgetType;
- (void)replaceSubview:(id)a0 with:(id)a1;
- (void)setBorderType:(unsigned long long)a0;
- (void)setFrameFromContentFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)setTitleWithMnemonic:(id)a0;

@end
