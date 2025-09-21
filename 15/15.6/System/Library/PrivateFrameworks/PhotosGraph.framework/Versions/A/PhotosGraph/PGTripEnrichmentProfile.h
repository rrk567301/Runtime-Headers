@interface PGTripEnrichmentProfile : PGDayGroupAbstractEnrichmentProfile

- (id)identifier;
- (char)canEnrichHighlight:(id)a0 withOptions:(unsigned long long)a1;
- (id)curationOptionsWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1;
- (double)promotionScoreWithHighlightInfo:(id)a0;
- (id)titleWithHighlightInfo:(id)a0 sharingFilter:(unsigned short)a1 curatedAssets:(id)a2 keyAsset:(id)a3 createVerboseTitle:(char)a4 error:(out id *)a5;

@end
