@interface GCGenericDeviceDataProcessorExpressionModelBuilder : NSObject

@property (class, readonly) Class modelClass;

- (void)reset;
- (id)init;
- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
