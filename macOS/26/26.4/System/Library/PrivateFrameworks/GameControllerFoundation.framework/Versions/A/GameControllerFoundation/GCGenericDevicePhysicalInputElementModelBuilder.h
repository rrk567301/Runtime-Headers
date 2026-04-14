@class NSString, NSArray, NSNumber;

@interface GCGenericDevicePhysicalInputElementModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *names;
@property (copy, nonatomic, getter=isAnalog) NSNumber *analog;
@property (copy, nonatomic) NSString *localizedNameKey;
@property (copy, nonatomic) NSString *symbolName;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)a0 error:(out id *)a1;
- (void)initializeWithModel:(id)a0;

@end
