@class NSArray;

@interface GCGenericDeviceRumbleModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (nonatomic) float dispatchFrequency;
@property (copy, nonatomic) NSArray *actuators;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) NSArray *outputs;

- (id)build;
- (unsigned long long)hash;
- (void)reset;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
