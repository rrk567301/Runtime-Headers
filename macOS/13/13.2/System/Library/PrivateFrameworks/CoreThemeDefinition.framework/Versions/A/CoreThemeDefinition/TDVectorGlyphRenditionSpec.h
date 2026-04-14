@interface TDVectorGlyphRenditionSpec : TDSimpleArtworkRenditionSpec

- (id)createCSIRepresentationWithCompression:(BOOL)a0 colorSpaceID:(unsigned long long)a1 document:(id)a2;
- (BOOL)canBePackedWithDocument:(id)a0;

@end
