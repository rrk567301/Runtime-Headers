@class NSString, FPQueryEnumerationSettings, CSSearchQuery;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {
    CSSearchQuery *_searchQuery;
}

@property (readonly, nonatomic) FPQueryEnumerationSettings *settings;
@property (readonly, nonatomic) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (void)augmentQueryContext:(id)a0;
- (unsigned long long)desiredCount;
- (char)isEqualToItemQueryDescriptor:(id)a0;
- (char)keepCollectorsAlive;
- (id)queryStringForMountPoint:(id)a0;
- (char)supportsQueryingAllMountPoints;
- (char)supportsSemanticSearch;

@end
