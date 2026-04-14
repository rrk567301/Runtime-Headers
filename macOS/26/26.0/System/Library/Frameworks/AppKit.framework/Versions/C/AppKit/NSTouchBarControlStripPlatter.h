@class NSString, NSColor;

@interface NSTouchBarControlStripPlatter : NSView <NSCollectionViewElement> {
    NSColor *_platterColor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy) NSString *identifier;
@property double cornerRadius;
@property (copy) NSColor *platterColor;

+ (BOOL)clipsToBounds;
+ (id)keyPathsForValuesInvalidatingDisplay;

- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateLayer;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)applyLayoutAttributes:(id)a0;
- (void)prepareForReuse;
- (BOOL)wantsUpdateLayer;

@end
