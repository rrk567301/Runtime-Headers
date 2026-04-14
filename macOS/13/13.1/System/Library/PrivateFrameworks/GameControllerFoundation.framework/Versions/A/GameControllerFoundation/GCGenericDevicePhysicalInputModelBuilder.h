@class NSSet;

@interface GCGenericDevicePhysicalInputModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *elements;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (void)initializeWithModel:(id)a0;

@end
