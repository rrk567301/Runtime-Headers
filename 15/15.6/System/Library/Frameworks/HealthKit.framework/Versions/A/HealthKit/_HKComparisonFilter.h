@class NSString, NSSet;

@interface _HKComparisonFilter : _HKFilter <HKComparisonFilter> {
    struct atomic_flag { _Atomic BOOL _Value; } _hasBeenConfiguredFlag;
}

@property (readonly, copy, nonatomic) NSString *keyPath;
@property (readonly, nonatomic) unsigned long long operatorType;
@property (readonly, copy, nonatomic) id value;
@property (readonly, copy, nonatomic) NSSet *dataTypes;
@property (readonly, nonatomic) unsigned long long applicationSDKVersionToken;
@property (readonly, nonatomic) long long keyPathIntegerValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)supportsSecureCoding;
+ (char)areValidTypes:(id)a0 forKeyPath:(id)a1 error:(id *)a2;
+ (id)_filterForKeyPath:(id)a0 operatorType:(unsigned long long)a1 value:(id)a2 dataTypes:(id)a3 applicationSDKVersionToken:(unsigned long long)a4 isSubpredicate:(char)a5;
+ (char)_isValidValue:(id)a0 forKeyPath:(id)a1 allowedClases:(id)a2 error:(id *)a3;
+ (id)allowedDataTypeClassesForKeyPath:(id)a0;
+ (id)allowedValueClassesForKeyPath:(id)a0;
+ (char)allowsEmptyContainerValuesForKeyPath:(id)a0;
+ (char)allowsEmptyDataTypesSetForKeyPath:(id)a0;
+ (long long)enumRepresentationForKeyPath:(id)a0;
+ (id)filterForKeyPath:(id)a0 operatorType:(unsigned long long)a1 value:(id)a2 dataTypes:(id)a3;
+ (id)filterForKeyPath:(id)a0 operatorType:(unsigned long long)a1 value:(id)a2 dataTypes:(id)a3 isSubpredicate:(char)a4;
+ (char)isAllowedPredicateOperatorType:(unsigned long long)a0 forKeyPath:(id)a1;
+ (char)isSupportedKeyPath:(id)a0;
+ (char)isValidValue:(id)a0 forKeyPath:(id)a1 operatorType:(unsigned long long)a2 dataTypes:(id)a3 error:(id *)a4;
+ (char)requiresSubpredicate;
+ (char)supportsKeyPath:(id)a0 forTypes:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithKeyPath:(id)a0 operatorType:(unsigned long long)a1 value:(id)a2 dataTypes:(id)a3 applicationSDKVersionToken:(unsigned long long)a4;
- (void)configureInMemoryFilter;

@end
