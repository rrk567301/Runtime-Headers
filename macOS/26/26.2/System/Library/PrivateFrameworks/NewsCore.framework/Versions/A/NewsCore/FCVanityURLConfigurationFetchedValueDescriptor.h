@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager;

- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)initWithConfigurationManager:(id)a0;
- (id)_vanityURLConfiguration;
- (id)fastCachedValue;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)inputManagers;
- (id)init;

@end
