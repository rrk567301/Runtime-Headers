@interface PDFCRGroupRegionCell : PDFCRGroupRegion

@property unsigned long long groupID;
@property unsigned long long rowIndex;
@property unsigned long long colIndex;
@property unsigned long long rowSpan;
@property unsigned long long colSpan;

- (id)initWithBoundingQuad:(id)a0 layoutDirection:(unsigned long long)a1 subregions:(id)a2 parent:(id)a3 groupID:(unsigned long long)a4 rowIndex:(unsigned long long)a5 colIndex:(unsigned long long)a6 rowSpan:(unsigned long long)a7 colSpan:(unsigned long long)a8;

@end
