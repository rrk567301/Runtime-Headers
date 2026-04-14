@class NSString, FPQueryEnumerationSettings, CSSearchQuery;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {
    CSSearchQuery *_searchQuery;
}

@property (readonly, nonatomic) FPQueryEnumerationSettings *settings;
@property (readonly, nonatomic) NSString *name;

- (id)initWithSettings:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)augmentQueryContext:(id)a0;
- (unsigned long long)desiredCount;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (BOOL)keepCollectorsAlive;
- (id)queryStringForMountPoint:(id)a0;
- (BOOL)supportsQueryingAllMountPoints;
- (BOOL)supportsSemanticSearch;

@end
