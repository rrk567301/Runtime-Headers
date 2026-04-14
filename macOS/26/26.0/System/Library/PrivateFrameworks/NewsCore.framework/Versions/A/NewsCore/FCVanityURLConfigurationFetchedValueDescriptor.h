@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager;

- (id)_vanityURLConfiguration;
- (id)initWithConfigurationManager:(id)a0;
- (id)fastCachedValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)inputManagers;
- (id)init;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
