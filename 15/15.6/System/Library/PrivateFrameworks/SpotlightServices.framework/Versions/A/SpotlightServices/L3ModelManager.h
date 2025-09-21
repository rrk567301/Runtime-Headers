@class SSPlistDataReader, NSCondition, spotlight_l3_1, NSMutableArray;

@interface L3ModelManager : NSObject {
    NSCondition *_condition;
}

@property (retain, nonatomic) SSPlistDataReader *bundleDict;
@property (retain, nonatomic) SSPlistDataReader *localeDict;
@property (retain, nonatomic) NSMutableArray *idFeatureConfigs;
@property (retain, nonatomic) NSMutableArray *denseFeatureConfigs;
@property char loaded;
@property (retain, nonatomic) spotlight_l3_1 *model;

- (id)init;
- (void).cxx_destruct;
- (id)predict:(id)a0;
- (char)loadModel;
- (float)sigmoid:(float)a0;
- (void)unloadModel;
- (char)loadModelConfig;
- (void)extractFeatures:(id)a0 idFeatures:(id)a1 denseFeatures:(id)a2 index:(long long)a3 unitTest:(char)a4;
- (id)get2DArrayFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 fieldName:(const char *)a1 dataType:(int)a2;
- (id)getArrayDictionaryFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 fieldName:(const char *)a1;
- (id)getArrayFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 fieldName:(const char *)a1 dataType:(int)a2;
- (char)getBoolFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 valueObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a1 fieldName:(const char *)a2 defaultValue:(char)a3;
- (long long)getBundleId:(id)a0 defaultValue:(long long)a1 hashing:(char)a2 hashBucketStart:(int)a3 embeddingTableSize:(int)a4;
- (float)getFloatFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 valueObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a1 fieldName:(const char *)a2 defaultValue:(float)a3;
- (long long)getIntFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 valueObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a1 fieldName:(const char *)a2 defaultValue:(long long)a3;
- (long long)getLocaleId:(id)a0 defaultValue:(long long)a1;
- (const char *)getStringFeatureField:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a0 valueObj:(struct { char *x0; unsigned long long x1; struct { unsigned int x0; unsigned char x1; } x2; } *)a1 fieldName:(const char *)a2 log:(char)a3;
- (char)loadDictionary;
- (struct _MDPlistContainer { } *)loadMdpData:(id)a0;
- (char)loadUnitTestData:(id)a0;
- (float)minMaxNormalize:(float)a0 min:(float)a1 max:(float)a2;
- (id)predict:(id)a0 unitTest:(char)a1;
- (id)predictProcessedFeatures:(id)a0 denseFeatures:(id)a1;

@end
