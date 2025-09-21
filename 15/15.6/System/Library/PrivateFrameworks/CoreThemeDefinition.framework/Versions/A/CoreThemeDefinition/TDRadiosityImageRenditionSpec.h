@class TDFlattenedImageRenditionSpec;

@interface TDRadiosityImageRenditionSpec : TDSimpleArtworkRenditionSpec

@property (retain, nonatomic) TDFlattenedImageRenditionSpec *flattenedImage;

- (id)createCSIRepresentationWithCompression:(char)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (char)updatePackingPropertiesWithDocument:(id)a0;

@end
