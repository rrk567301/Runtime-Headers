@class NSSet;

@interface TDMicaAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)_productionWithRenditionsInProductions:(id)a0;
- (id)copyDataFromAttributes;
- (char)hasCursorProduction;
- (char)hasProduction;
- (id)production;
- (void)setAttributesFromCopyData:(id)a0;

@end
