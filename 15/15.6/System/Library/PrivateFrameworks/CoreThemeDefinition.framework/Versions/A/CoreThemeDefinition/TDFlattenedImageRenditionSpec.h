@class NSOrderedSet, TDRadiosityImageRenditionSpec;

@interface TDFlattenedImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) NSOrderedSet *layerReferences;
@property (retain, nonatomic) TDRadiosityImageRenditionSpec *radiosityImage;

- (void)addLayerReferencesObject:(id)a0;
- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (void)drawFlattenedImageIntoContext:(struct CGContext { } *)a0 document:(id)a1;
- (char)updatePackingPropertiesWithDocument:(id)a0;

@end
