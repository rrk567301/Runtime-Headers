@class NSString, WFParameter, WFEncodedTypedValue, NSError, LNValueType, LNAction;
@protocol WFVariableDataSource;

@interface WFToolInvocation : NSObject {
    void /* unknown type, empty encoding */ toolInvocation;
}

@property (class, nonatomic, readonly) NSString *errorDomain;

+ (void)invocationFrom:(LNAction *)a0 bundleIdentifier:(NSString *)a1 deviceIdentifier:(NSString *)a2 completionHandler:(void (^)(WFToolInvocation *, NSError *))a3;

- (id)options;
- (id)init;
- (void).cxx_destruct;
- (BOOL)containsParameterValueForKey:(id)a0;
- (BOOL)donateToBiomeAndReturnError:(id *)a0;
- (id)encodeAndReturnError:(id *)a0;
- (id)initWithEncodedToolInvocation:(id)a0 error:(id *)a1;
- (void)processUnionWithParameter:(WFParameter *)a0 variableSource:(id<WFVariableDataSource>)a1 completionHandler:(void (^)(id, NSError *))a2;
- (void)processedValueFromEncodedValue:(WFEncodedTypedValue *)a0 forParameter:(WFParameter *)a1 ofClass:(Class)a2 variableSource:(id<WFVariableDataSource>)a3 completionHandler:(void (^)(id, NSError *))a4;
- (void)valueForParameter:(WFParameter *)a0 ofClass:(Class)a1 variableSource:(id<WFVariableDataSource>)a2 completionHandler:(void (^)(id, NSError *))a3;
- (void)valueTypeForParameterWithKey:(NSString *)a0 completionHandler:(void (^)(LNValueType *, NSError *))a1;

@end
