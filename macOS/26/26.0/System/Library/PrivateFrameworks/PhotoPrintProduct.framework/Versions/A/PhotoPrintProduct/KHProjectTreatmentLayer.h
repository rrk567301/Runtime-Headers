@interface KHProjectTreatmentLayer : KHTreatmentLayer

- (id)treatment;
- (id)layer;
- (void)remove;
- (id)assetForId:(unsigned long long)a0;
- (Class)attributeClass;
- (id)initWithModelId:(id)a0 inDatabase:(id)a1;
- (BOOL)isProjectModel;

@end
