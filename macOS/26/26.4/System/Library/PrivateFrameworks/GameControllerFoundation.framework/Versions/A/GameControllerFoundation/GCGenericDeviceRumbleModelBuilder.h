@class NSArray;

@interface GCGenericDeviceRumbleModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) float dispatchFrequency;
@property (copy, nonatomic) NSArray *actuators;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSArray *outputs;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
