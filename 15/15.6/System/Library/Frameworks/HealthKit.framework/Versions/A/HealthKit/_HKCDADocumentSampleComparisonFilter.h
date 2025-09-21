@class NSRegularExpression;

@interface _HKCDADocumentSampleComparisonFilter : _HKComparisonFilter {
    NSRegularExpression *_comparisonExpression;
}

+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;

- (void).cxx_destruct;
- (char)acceptsDataObject:(id)a0;
- (void)configureInMemoryFilter;

@end
