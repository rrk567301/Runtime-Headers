@interface GCGenericDeviceDataProcessorExpressionModelBuilder : NSObject

@property (class, readonly) Class modelClass;

- (id)build;
- (id)init;
- (void)reset;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
