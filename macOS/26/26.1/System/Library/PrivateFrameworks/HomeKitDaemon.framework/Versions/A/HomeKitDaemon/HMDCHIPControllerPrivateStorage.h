@class NSString, NSDictionary, HMDHome, NSNumber;

@interface HMDCHIPControllerPrivateStorage : HMFObject <HMFLogging>

@property (copy) NSNumber *controllerNodeID;
@property (readonly, weak) HMDHome *home;
@property (readonly, copy, nonatomic) NSNumber *cachedLocalControllerNodeID;
@property (readonly, copy) NSDictionary *debugDictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)initWithHome:(id)a0;
- (id)attributeDescriptions;
- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)valueForSDKKey:(id)a0;
- (id)allSDKKeyValuePairs;
- (id)privateDataSourceForControllerNodeID:(id)a0;
- (BOOL)removeAllSDKKeyValuePairs;
- (BOOL)removeValueForSDKKey:(id)a0;
- (BOOL)setSDKKeyValuePairs:(id)a0;
- (BOOL)setValue:(id)a0 forSDKKey:(id)a1;

@end
