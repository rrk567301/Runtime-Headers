@interface PXGOverlayTextureManager : NSObject

@property (readonly, nonatomic) char wantsOverlayTextures;

- (id)overlayTexturesByPresentationTypeForTextures:(id)a0 spriteDataStore:(id)a1;

@end
