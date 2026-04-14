@interface TDEffectStyleProduction : TDElementProduction

- (id)displayName;
- (void)deleteRenditionsInDocument:(id)a0 shouldDeleteAssetFiles:(BOOL)a1;
- (id)associatedFileModificationDateWithDocument:(id)a0;
- (void)generateRenditionsWithDocument:(id)a0;

@end
