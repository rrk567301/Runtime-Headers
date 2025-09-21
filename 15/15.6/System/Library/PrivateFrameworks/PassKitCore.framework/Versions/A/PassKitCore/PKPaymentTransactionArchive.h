@class NSString, NSSet;

@interface PKPaymentTransactionArchive : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSSet *locations;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (char)allArchiveLocationsWithType:(unsigned long long)a0 areArchived:(char)a1;
- (id)archiveLocationMatchingLocation:(id)a0;
- (id)archiveLocationsWithCloudStoreZone:(id)a0 isArchived:(char)a1;
- (id)archiveLocationsWithType:(unsigned long long)a0 isArchived:(char)a1;
- (void)insertOrUpdateArchiveLocationWithCloudStoreZone:(id)a0 isArchived:(char)a1 insertionMode:(unsigned long long)a2;
- (char)isEqualToArchive:(id)a0;
- (void)updateArchiveLocationsWithType:(unsigned long long)a0 isArchived:(char)a1;
- (void)updateTransactionArchiveLocationsWithArchive:(id)a0 type:(unsigned long long)a1 archived:(char)a2;

@end
