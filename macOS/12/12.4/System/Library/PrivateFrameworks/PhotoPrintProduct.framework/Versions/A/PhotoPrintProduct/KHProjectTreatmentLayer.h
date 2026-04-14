@interface KHProjectTreatmentLayer : KHTreatmentLayer

- (void)remove;
- (id)layer;
- (id)treatment;
- (BOOL)isProjectModel;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (id)assetForId:(unsigned long long)a0;
- (Class)attributeClass;

@end
