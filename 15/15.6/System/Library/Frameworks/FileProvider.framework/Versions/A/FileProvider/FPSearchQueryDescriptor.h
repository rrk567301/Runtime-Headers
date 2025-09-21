@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;
@property (nonatomic, getter=isThirdPartySearchOnServer) char thirdPartySearchOnServer;
@property (nonatomic) char avoidCoreSpotlightSearch;

- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (id)_scopes;
- (void)augmentQueryContext:(id)a0;
- (char)isEqualToItemQueryDescriptor:(id)a0;
- (char)keepCollectorsAlive;
- (id)queryStringForMountPoint:(id)a0;

@end
