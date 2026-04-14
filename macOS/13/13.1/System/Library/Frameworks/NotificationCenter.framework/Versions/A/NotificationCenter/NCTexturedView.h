@class NCMaterialLayer;

@interface NCTexturedView : NSVisualEffectView <NCMaterialDelegate> {
    NCMaterialLayer *_materialLayer;
    BOOL _darkLook;
    unsigned char _style;
}

@property (nonatomic) BOOL textureVisible;

- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_shouldAutoFlattenLayerTree;
- (void)appearanceChanged:(BOOL)a0;
- (void)materialChanged:(unsigned char)a0;
- (void)_setupAppearance:(BOOL)a0 style:(unsigned char)a1;
- (void)_createBackdropLayers;

@end
