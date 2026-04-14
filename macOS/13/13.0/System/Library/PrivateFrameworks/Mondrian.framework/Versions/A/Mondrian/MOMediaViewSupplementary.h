@class MOMediaView, NSString, UXView, MOMediaSection;

@interface MOMediaViewSupplementary : UXCollectionReusableView

@property (class, readonly) struct CGSize { double x0; double x1; } defaultSize;
@property (class, readonly) BOOL blocksDefaultLayoutBehavior;

@property (readonly) NSString *uuid;
@property (readonly, weak, nonatomic) MOMediaView *mediaView;
@property (readonly, nonatomic) UXView *contentView;
@property (nonatomic) unsigned long long orientation;
@property (readonly) MOMediaSection *mediaSection;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layout;
- (id)indexPath;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)wantsUpdateLayer;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (void)mouseMoved:(id)a0;
- (BOOL)isFloating;
- (id)representedElementKind;
- (void)_setMediaView:(id)a0;
- (void)prepareForRecycling;
- (void)updateWithMediaSection:(id)a0;

@end
