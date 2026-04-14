@class NSString, NSArray;

@interface GCGenericDeviceRumbleOutputModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSArray *fields;

- (BOOL)isEqual:(id)a0;
- (id)build;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (void)reset;
- (id)init;
- (void)initializeWithModel:(id)a0;

@end
