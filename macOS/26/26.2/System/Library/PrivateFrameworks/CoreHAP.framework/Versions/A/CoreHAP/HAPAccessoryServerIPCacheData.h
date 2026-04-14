@class NSDictionary;

@interface HAPAccessoryServerIPCacheData : NSObject

@property (retain, nonatomic) NSDictionary *socketInfo;
@property (retain, nonatomic) NSDictionary *bonjourDeviceInfo;

+ (id)logCategory;

- (id)debugDescription;
- (void).cxx_destruct;
- (id)initFromDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithCachedIp:(id)a0 bonjourRecord:(id)a1;

@end
