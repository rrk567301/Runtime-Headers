@class NSString;

@interface GCGenericDeviceRumbleActuatorModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *name;

- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)reset;
- (void).cxx_destruct;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
