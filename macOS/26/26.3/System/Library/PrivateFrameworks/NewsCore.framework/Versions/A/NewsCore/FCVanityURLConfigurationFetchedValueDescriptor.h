@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager;

- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)init;
- (id)inputManagers;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithConfigurationManager:(id)a0;
- (id)fastCachedValue;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)_vanityURLConfiguration;

@end
