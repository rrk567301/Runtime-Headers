@class NSString;

@interface FPSearchQueryDescriptor : FPSpotlightQueryDescriptor

@property (copy) NSString *searchQueryString;

- (unsigned long long)hash;
- (id)name;
- (void).cxx_destruct;
- (id)_scopes;
- (id)queryStringForMountPoint:(id)a0;
- (BOOL)keepCollectorsAlive;
- (void)augmentQueryContext:(id)a0;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;

@end
