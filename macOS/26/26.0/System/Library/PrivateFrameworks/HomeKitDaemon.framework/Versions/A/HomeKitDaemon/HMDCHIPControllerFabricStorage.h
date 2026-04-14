@class NSDictionary, NSString;

@interface HMDCHIPControllerFabricStorage : HMFObject <HMFLogging, NSCopying>

@property (copy) NSDictionary *keyValueStore;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)updateHomeModel:(id)a0;
- (BOOL)updateUsingHomeModel:(id)a0;

@end
