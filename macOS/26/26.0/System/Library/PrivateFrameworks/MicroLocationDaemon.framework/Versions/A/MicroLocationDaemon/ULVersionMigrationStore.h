@class NSMutableSet;

@interface ULVersionMigrationStore : ULStore

@property (retain, nonatomic) NSMutableSet *handledRecordingUUIDs;
@property (nonatomic) struct map<std::string, DeviceModel, std::less<std::string>, std::allocator<std::pair<const std::string, DeviceModel>>> { struct __tree<std::__value_type<std::string, DeviceModel>, std::__map_value_compare<std::string, std::__value_type<std::string, DeviceModel>, std::less<std::string>>, std::allocator<std::__value_type<std::string, DeviceModel>>> { void *__begin_node_; struct __tree_end_node<std::__tree_node_base<void *> *> { void *__left_; } __end_node_; unsigned long long __size_; } __tree_; } anchorDeviceModelAllowedMap;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)_commitBatchForEntityName:(id)a0 migratingAttribute:(id)a1 stop:(BOOL *)a2;
- (void)_connectLabelsInBatch:(id)a0 withTriggerUUIDMap:(id)a1 andScanEventsUUIDMap:(id)a2;
- (BOOL)_connectLabelsToScanningEvents;
- (void)_createAnchorAppearanceMapMOFromConfigurationMO:(id)a0 withLOIObjectID:(id)a1;
- (void)_createBLEMeasurementFromDeprecatedMeasurement:(id)a0 withMeasurementProto:(struct unique_ptr<CLMicroLocationProto::Measurement, std::default_delete<CLMicroLocationProto::Measurement>> { struct Measurement *x0; })a1 andRelatedScanningEventObjectID:(id)a2;
- (void)_createMeasurementFromDeprecatedMeasurement:(id)a0 withRelatedScanningEventObjectID:(id)a1;
- (BOOL)_createScanningEventFromRecordingEvent:(id)a0 withRelatedLOIObjectID:(id)a1;
- (void)_createUWBMeasurementFromDeprecatedMeasurement:(id)a0 withMeasurementProto:(struct unique_ptr<CLMicroLocationProto::Measurement, std::default_delete<CLMicroLocationProto::Measurement>> { struct Measurement *x0; })a1 andRelatedScanningEventObjectID:(id)a2;
- (void)_createWiFiHistogramMOFromConfigurationMO:(id)a0 withLOIObjectID:(id)a1;
- (void)_createWiFiMeasurementFromDeprecatedMeasurement:(id)a0 withMeasurementProto:(struct unique_ptr<CLMicroLocationProto::Measurement, std::default_delete<CLMicroLocationProto::Measurement>> { struct Measurement *x0; })a1 andRelatedScanningEventObjectID:(id)a2;
- (struct unique_ptr<CLMicroLocationProto::Configuration, std::default_delete<CLMicroLocationProto::Configuration>> { struct Configuration *x0; })_getConfigProtoFromConfigurationMO:(id)a0;
- (id)_getTriggerToRecordingUUIDMap;
- (id)_getUUIDToObjectIDMapForRelatedEntityName:(id)a0 relatedAttribute:(id)a1 relatedSortAttribute:(id)a2 filterUUIDs:(id)a3;
- (BOOL)_migrateAttributeToRelationshipForEntityName:(id)a0 deprecatedAttribute:(id)a1 sortAttribute:(id)a2 relationship:(id)a3 relatedEntityName:(id)a4 relatedAttribute:(id)a5 relatedSortAttribute:(id)a6 fetchBatchSize:(unsigned long long)a7;
- (BOOL)_migrateAttributesToRelationships;
- (void)_migrateBatch:(id)a0 forDeprecatedAttribute:(id)a1 relationship:(id)a2 withRelationUUIDMap:(id)a3;
- (void)_migrateConfigurationInBatch:(id)a0 withLOIMap:(id)a1;
- (BOOL)_migrateConfigurations;
- (BOOL)_migrateMeasurements;
- (void)_migrateMeasurementsInBatch:(id)a0 withRelationUUIDMap:(id)a1;
- (BOOL)_migrateRecordingEvents;
- (void)_migrateRecordingEventsInBatch:(id)a0 withRelationUUIDMap:(id)a1;
- (void)_updateContextLayersForLabelsInBatch:(id)a0;
- (BOOL)_updateLabelsContextLayers;
- (id)initWithDbStore:(struct ULDatabaseStoreInterface { void /* function */ **x0; } *)a0;
- (BOOL)performVersionMigrationForModelVersion:(id)a0;

@end
