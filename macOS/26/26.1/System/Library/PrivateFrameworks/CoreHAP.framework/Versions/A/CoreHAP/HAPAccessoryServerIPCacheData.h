@class NSDictionary;

@interface HAPAccessoryServerIPCacheData : NSObject

@property (retain, nonatomic) NSDictionary *socketInfo;
@property (retain, nonatomic) NSDictionary *bonjourDeviceInfo;

+ (id)logCategory;

- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)initFromDictionary:(id)a0;
- (id)initWithCachedIp:(id)a0 bonjourRecord:(id)a1;

@end
