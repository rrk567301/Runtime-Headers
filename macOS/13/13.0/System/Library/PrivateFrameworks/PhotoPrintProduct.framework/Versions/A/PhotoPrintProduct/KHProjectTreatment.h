@interface KHProjectTreatment : KHTreatment

+ (id)allTreatmentsFromDatabase:(id)a0;
+ (id)treatmentForKey:(long long)a0 fromDatabase:(id)a1;
+ (id)treatmentWithName:(id)a0 fromDatabase:(id)a1;
+ (id)treatmentWithConversionName:(id)a0 fromDatabase:(id)a1;

- (void)remove;
- (id)behaviors;
- (id)backgroundLayers;
- (id)allLayers;
- (BOOL)isProjectModel;
- (id)modelsUsingTreatment;
- (id)foregroundLayers;
- (void)addForegroundLayer:(id)a0;
- (void)addBackgroundLayer:(id)a0;
- (id)treatmentLayersForLayerClass:(unsigned long long)a0;
- (id)treatmentFrameLayersWithContentEntityClass:(id)a0;

@end
