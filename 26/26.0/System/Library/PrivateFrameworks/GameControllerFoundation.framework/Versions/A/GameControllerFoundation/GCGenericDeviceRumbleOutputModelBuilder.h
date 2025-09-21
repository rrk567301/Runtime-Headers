@class NSString, NSArray;

@interface GCGenericDeviceRumbleOutputModelBuilder : NSObject

@property (class, readonly) Class modelClass;

@property (copy, nonatomic) NSString *elementIdentifier;
@property (copy, nonatomic) NSArray *fields;

- (void)reset;
- (id)init;
- (id)build;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)initializeWithModel:(id)a0;

@end
