@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;

- (id)name;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_scopes;
- (id)queryStringForMountPoint:(id)a0;
- (void)augmentQueryContext:(id)a0;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (BOOL)keepCollectorsAlive;

@end
