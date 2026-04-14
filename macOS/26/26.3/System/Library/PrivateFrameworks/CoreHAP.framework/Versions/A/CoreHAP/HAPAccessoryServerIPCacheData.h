@class NSDictionary;

@interface HAPAccessoryServerIPCacheData : NSObject

@property (retain, nonatomic) NSDictionary *socketInfo;
@property (retain, nonatomic) NSDictionary *bonjourDeviceInfo;

+ (id)logCategory;

- (id)initFromDictionary:(id)a0;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)initWithCachedIp:(id)a0 bonjourRecord:(id)a1;

@end
