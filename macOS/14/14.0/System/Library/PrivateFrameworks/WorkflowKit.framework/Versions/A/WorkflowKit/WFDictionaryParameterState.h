@class NSArray, NSUUID, NSString;

@interface WFDictionaryParameterState : NSObject <WFParameterState>

@property (readonly, copy, nonatomic) NSArray *keyValuePairs;
@property (readonly, nonatomic) NSUUID *identity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)processingValueClass;
+ (void)processValues:(id)a0 context:(id)a1 processingClass:(Class)a2 userInputRequiredHandler:(id /* block */)a3 valueHandler:(id /* block */)a4;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)serializedRepresentation;
- (id)initWithKeyValuePairs:(id)a0;
- (id)containedVariables;
- (id)initWithSerializedRepresentation:(id)a0 variableProvider:(id)a1 parameter:(id)a2;
- (void)processWithContext:(id)a0 userInputRequiredHandler:(id /* block */)a1 valueHandler:(id /* block */)a2;
- (id)initWithKeyValuePairs:(id)a0 identity:(id)a1;

@end
