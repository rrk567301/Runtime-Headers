@class NSString;

@interface _HKObjectComparisonFilter : _HKComparisonFilter {
    char _compareForLocalDevice;
    NSString *_devicePropertyName;
    NSString *_metadataKey;
}

+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (char)allowsEmptyContainerValuesForKeyPath:(id)a0;
+ (char)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedDevicePropertyKey:(id)a0;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;

- (void).cxx_destruct;
- (char)_acceptsDataObjectWithMetadata:(id)a0;
- (char)_acceptsDataObjectComparingDeviceProperty:(id)a0;
- (char)_acceptsDataObjectWithAppleWatchSource:(id)a0;
- (char)_acceptsDataObjectWithContributor:(id)a0;
- (char)_acceptsDataObjectWithCreationTime:(double)a0;
- (char)_acceptsDataObjectWithSource:(id)a0;
- (char)_acceptsDataObjectWithValue:(id)a0;
- (void)_configureForKeyPathDeviceProperty;
- (void)_configureForKeyPathSource;
- (void)_configureForMetdataKeyPath;
- (char)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
