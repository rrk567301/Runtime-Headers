@class NSArray;

@interface CNAvatarViewModel : NSObject

@property (retain, nonatomic) NSArray *contacts;
@property (retain, nonatomic) NSArray *likenesses;
@property (nonatomic) long long behavior;
@property (nonatomic) unsigned long long style;
@property (nonatomic) BOOL monogramOnly;
@property (nonatomic) unsigned long long placeholderContactCount;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForSnowglobeIconAtIndex:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1 iconCount:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForIconAtIndex:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1 iconCount:(unsigned long long)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })knockoutFrameForIconAtIndex:(unsigned long long)a0 containerSize:(struct CGSize { double x0; double x1; })a1 iconCount:(unsigned long long)a2;
- (id)editOverlayString;
- (id)editOverlayFont;
- (id)editOverlayTextColor;
- (double)knockoutThicknessForContainerSize:(struct CGSize { double x0; double x1; })a0 iconCount:(unsigned long long)a1;
- (id)clippingLayerForIconWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
