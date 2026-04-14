@class NSString, CUIMutableCommonAssetStorage, NSMutableDictionary, NSMutableArray;

@interface CUISingleNamedAssetCreator : NSObject {
    double _radiosityCompressionQuaility;
    double _flattenedCompressionQuality;
    double _layersCompressionQuality;
    long long _compressionType;
    NSMutableDictionary *_mappings;
}

@property (retain) CUIMutableCommonAssetStorage *store;
@property (retain) NSString *primaryName;
@property unsigned long long primaryIndex;
@property (retain) NSMutableArray *names;
@property (retain) NSMutableArray *generators;
@property (nonatomic) double compressionQuality;
@property (nonatomic) long long compressionType;
@property (nonatomic) BOOL allowsWideGamutImages;
@property (nonatomic) BOOL allowsPaletteImageCompression;
@property (nonatomic) BOOL generateFlattenedImages;
@property (nonatomic) long long targetPlatform;
@property (nonatomic) BOOL checkForMonochrome;

- (void)dealloc;
- (id)path;
- (void)setThinningArguments:(id)a0;
- (BOOL)distillAndSave:(id *)a0;
- (id)_addImage:(struct CGImage { } *)a0 withBaseKey:(id)a1 name:(id)a2 atScale:(long long)a3;
- (void)_addImageAsJPEG:(struct CGImage { } *)a0 withBaseKey:(id)a1 withName:(id)a2 atScale:(long long)a3;
- (void)_addLayerStackWithSize:(struct CGSize { double x0; double x1; })a0 type:(long long)a1 stackData:(id)a2 name:(id)a3 atScale:(long long)a4 withRenderingProperties:(id)a5;
- (BOOL)_allowsWideGamutImages;
- (id)_colorBaseKeyWithScale:(long long)a0;
- (void)_configureDefaultStorageParameters;
- (id)_defaultBaseKeyWithScale:(long long)a0;
- (BOOL)_distillNameEntries:(id *)a0;
- (BOOL)_distillRenditions:(id *)a0;
- (BOOL)_extractFlattenedImages:(id *)a0;
- (void)_finalizeNameIdentifiers;
- (id)_flattenedImageBaseKeyWithScale:(long long)a0;
- (id)_generatorForName:(id)a0;
- (id)_generatorWithName:(id)a0;
- (id)_gradientBaseKeyWithScale:(long long)a0;
- (id)_iconGroupBaseKeyWithScale:(long long)a0;
- (id)_iconStackBaseKeyWithScale:(long long)a0;
- (id)_keyDataFromKey:(const struct _renditionkeytoken { unsigned short x0; unsigned short x1; } *)a0;
- (const struct _renditionkeyfmt { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3[0]; } *)_keyFormat;
- (id)_radiosityImageBaseKeyWithScale:(long long)a0;
- (id)_textureBaseKeyWithScale:(long long)a0;
- (id)_textureImageBaseKeyWithScale:(long long)a0;
- (id)_vectorImageBaseKeyWithScale:(long long)a0;
- (void)addColor:(struct CGColor { } *)a0 withName:(id)a1 atScale:(long long)a2;
- (void)addFlattenedImage:(struct CGImage { } *)a0 forLayerStackWithName:(id)a1 atScale:(long long)a2;
- (void)addGradient:(id)a0 withStops:(id)a1 ofType:(long long)a2 startPoint:(struct CGPoint { double x0; double x1; })a3 endPoint:(struct CGPoint { double x0; double x1; })a4 withName:(id)a5 atScale:(long long)a6;
- (void)addIconLayerGroupWithName:(id)a0 atScale:(long long)a1;
- (void)addIconLayerStackWithSize:(struct CGSize { double x0; double x1; })a0 stackData:(id)a1 name:(id)a2 atScale:(long long)a3;
- (void)addIconLayerStackWithSize:(struct CGSize { double x0; double x1; })a0 stackData:(id)a1 name:(id)a2 atScale:(long long)a3 withRenderingProperties:(id)a4;
- (void)addImage:(struct CGImage { } *)a0 withName:(id)a1 atScale:(long long)a2;
- (void)addImageAsJPEG:(struct CGImage { } *)a0 withName:(id)a1 atScale:(long long)a2;
- (void)addLayerReference:(id)a0 forColorToLayerStackWithName:(id)a1 atScale:(long long)a2;
- (void)addLayerReference:(id)a0 forGradientToLayerStackWithName:(id)a1 atScale:(long long)a2;
- (void)addLayerReference:(id)a0 forGroupToLayerStackWithName:(id)a1 atScale:(long long)a2;
- (void)addLayerReference:(id)a0 forImage:(struct CGImage { } *)a1 toLayerStackWithName:(id)a2 atScale:(long long)a3;
- (void)addLayerReference:(id)a0 forSVGDocumentToLayerStackWithName:(id)a1 atScale:(long long)a2;
- (void)addLayerStackWithSize:(struct CGSize { double x0; double x1; })a0 stackData:(id)a1 name:(id)a2 atScale:(long long)a3;
- (void)addSVGDocument:(struct CGSVGDocument { } *)a0 withName:(id)a1 atScale:(long long)a2;
- (void)addTexture:(id)a0 withName:(id)a1 atScale:(long long)a2;
- (double)flattenedLossyCompressionQuality;
- (id)initWithOutputURL:(id)a0 versionString:(id)a1;
- (double)layersLossyCompressionQuality;
- (double)radiosityLossyCompressionQuality;
- (void)setFlattenedLossyCompressionQuality:(double)a0;
- (void)setLayersLossyCompressionQuality:(double)a0;
- (void)setRadiosityLossyCompressionQuality:(double)a0;
- (void)setUpdateBitmapIndex:(BOOL)a0;
- (BOOL)updateBitmapIndex;
- (BOOL)writeFlattenedImageToOutput:(id)a0 error:(id *)a1;

@end
