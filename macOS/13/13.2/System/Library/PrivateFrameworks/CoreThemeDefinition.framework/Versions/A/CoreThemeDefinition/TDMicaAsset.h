@class NSSet;

@interface TDMicaAsset : TDAsset

@property (retain, nonatomic) NSSet *productions;

- (id)production;
- (id)_productionWithRenditionsInProductions:(id)a0;
- (BOOL)hasCursorProduction;
- (BOOL)hasProduction;
- (id)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(id)a0;

@end
