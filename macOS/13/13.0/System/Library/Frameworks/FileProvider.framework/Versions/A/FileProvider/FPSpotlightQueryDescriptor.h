@class NSString, FPQueryEnumerationSettings, CSSearchQuery;

@interface FPSpotlightQueryDescriptor : NSObject <NSCopying> {
    CSSearchQuery *_searchQuery;
}

@property (readonly, nonatomic) FPQueryEnumerationSettings *settings;
@property (readonly, nonatomic) NSString *name;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithSettings:(id)a0;
- (id)queryStringForMountPoint:(id)a0;
- (unsigned long long)desiredCount;
- (void)augmentQueryContext:(id)a0;
- (BOOL)supportsQueryingAllMountPoints;
- (BOOL)isEqualToItemQueryDescriptor:(id)a0;
- (BOOL)keepCollectorsAlive;

@end
