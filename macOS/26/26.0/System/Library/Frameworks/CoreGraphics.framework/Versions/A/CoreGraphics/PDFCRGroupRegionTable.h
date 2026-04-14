@class NSArray;

@interface PDFCRGroupRegionTable : PDFCRGroupRegion

@property (readonly) NSArray *cells;

- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 cells:(id)a2 parent:(id)a3;

@end
