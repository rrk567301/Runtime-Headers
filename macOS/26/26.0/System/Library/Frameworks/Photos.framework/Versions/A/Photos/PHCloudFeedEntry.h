@class NSString, NSDate;

@interface PHCloudFeedEntry : PHObject

@property (readonly, nonatomic) BOOL entryIsMine;
@property (readonly, nonatomic) long long entryType;
@property (readonly, nonatomic) NSDate *entryDate;
@property (readonly, nonatomic) NSString *entryAlbumGUID;
@property (readonly, nonatomic) NSString *entryInvitationRecordGUID;

+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)entityKeyMap;
+ (id)fetchType;
+ (id)propertiesToFetchWithHint:(unsigned long long)a0;
+ (id)fetchEntriesFromEarliestDate:(id)a0 latestDate:(id)a1 filter:(long long)a2 options:(id)a3;
+ (id)fetchEntryWithLocalIdentifier:(id)a0 options:(id)a1;

- (id)description;
- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)a0 propertyHint:(unsigned long long)a1 photoLibrary:(id)a2;

@end
