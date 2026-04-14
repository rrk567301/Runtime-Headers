@class NSSet;

@interface TDMicaAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)production;
- (BOOL)hasProduction;
- (id)_productionWithRenditionsInProductions:(id)a0;
- (BOOL)hasCursorProduction;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;

@end
