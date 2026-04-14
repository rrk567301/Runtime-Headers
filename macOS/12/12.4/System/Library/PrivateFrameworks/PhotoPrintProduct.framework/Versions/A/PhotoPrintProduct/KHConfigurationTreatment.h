@class NSString, KHTreatment;

@interface KHConfigurationTreatment : KHModel {
    long long _configurationId;
    long long _treatmentId;
    NSString *_designTag;
    long long _type;
    long long _sequence;
    KHTreatment *_treatment;
}

+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1 sortedBy:(unsigned long long)a2;
+ (id)modelForConfiguration:(id)a0 andTreatment:(id)a1 andType:(unsigned long long)a2;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1 withDesignTag:(id)a2;
+ (unsigned long long)treatmentTypeForLayoutUsageType:(unsigned long long)a0;
+ (unsigned long long)treatmentTypeForContentEntityClass:(id)a0 withCaption:(BOOL)a1;
+ (id)treatmentsForConfiguration:(id)a0 andType:(unsigned long long)a1;
+ (id)modelsForConfiguration:(id)a0 andType:(unsigned long long)a1;

- (void)dealloc;
- (long long)type;
- (void)setType:(long long)a0;
- (long long)sequence;
- (void)setSequence:(long long)a0;
- (long long)treatmentId;
- (void)setTreatmentId:(long long)a0;
- (id)treatment;
- (long long)sortByDefault:(id)a0;
- (long long)sortBySequence:(id)a0;
- (id)initWithModelId:(id)a0;
- (void)cacheSequence:(long long)a0;
- (void)cacheType:(long long)a0;
- (long long)configurationId;
- (void)cacheConfigurationId:(long long)a0;
- (id)designTag;
- (void)cacheDesignTag:(id)a0;
- (void)cacheTreatmentId:(long long)a0;
- (void)setConfigurationId:(long long)a0;
- (void)setDesignTag:(id)a0;

@end
