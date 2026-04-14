@class CCDeviceSite, NSArray;

@interface CCDiscoveredSet : CCSet

@property (retain, nonatomic) CCDeviceSite *deviceSite;
@property (retain, nonatomic) NSArray *relayedDeviceSites;
@property (nonatomic) unsigned long long discoveryErrorCode;

+ (id)_enumerateAndCopySets:(id)a0 setOptionsUsingBlock:(id /* block */)a1;
+ (id)addOptions:(unsigned char)a0 toSets:(id)a1;
+ (id)removeOptions:(unsigned char)a0 fromSets:(id)a1;

- (id)initFromDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)copyWithOptions:(unsigned char)a0 error:(id *)a1;
- (id)initWithSet:(id)a0 deviceSite:(id)a1 relayedDeviceSites:(id)a2 discoveryErrorCode:(unsigned long long)a3 error:(id *)a4;
- (BOOL)isEqualToDiscoveredSet:(id)a0;

@end
