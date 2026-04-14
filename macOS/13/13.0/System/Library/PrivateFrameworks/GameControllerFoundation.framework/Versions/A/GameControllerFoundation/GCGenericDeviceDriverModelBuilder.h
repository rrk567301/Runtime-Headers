@class NSSet, GCGenericDeviceInputEventDriverModel;

@interface GCGenericDeviceDriverModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSSet *elements;
@property (copy, nonatomic) GCGenericDeviceInputEventDriverModel *input;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)build;
- (void)initializeWithModel:(id)a0;

@end
