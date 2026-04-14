@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor

@property (readonly, nonatomic) FCFetchedValueManager *configurationManager;

- (id)initWithConfigurationManager:(id)a0;
- (id)inputManagers;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (void).cxx_destruct;
- (id)_vanityURLConfiguration;
- (id)init;
- (id)fastCachedValue;

@end
