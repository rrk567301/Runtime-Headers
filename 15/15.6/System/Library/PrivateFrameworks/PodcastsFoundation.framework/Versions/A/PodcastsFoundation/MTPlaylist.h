@class NSString, NSSet, NSOrderedSet, MTSyncInfo, MTPodcastPlaylistSettings;

@interface MTPlaylist : NSManagedObject

@property (readonly, nonatomic) char isFolder;
@property (readonly, nonatomic) char isITunesPlaylist;
@property (nonatomic) int containerOrder;
@property (nonatomic) long long downloadedCount;
@property (nonatomic) long long flags;
@property (nonatomic) double generatedDate;
@property (nonatomic) char hidden;
@property (nonatomic) long long mediaLibraryId;
@property (nonatomic) long long parentMediaLibraryId;
@property (nonatomic) long long sortOrder;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) long long unplayedCount;
@property (nonatomic) double updatedDate;
@property (retain, nonatomic) NSString *uuid;
@property (retain, nonatomic) NSSet *addedEpisodes;
@property (retain, nonatomic) MTPodcastPlaylistSettings *defaultSettings;
@property (retain, nonatomic) NSSet *deletedEpisodes;
@property (retain, nonatomic) NSOrderedSet *episodes;
@property (retain, nonatomic) NSOrderedSet *podcasts;
@property (retain, nonatomic) NSOrderedSet *settings;
@property (retain, nonatomic) MTSyncInfo *syncInfo;

+ (id)sortDescriptors;
+ (id)predicateForHasSyncableEpisode:(char)a0;
+ (id)predicateForIsCurrentlySyncable:(char)a0;
+ (id)predicateForIsHidden:(char)a0;
+ (id)predicateForStationUUID:(id)a0;
+ (id)predicateForStationsWithUUIDs:(id)a0;
+ (id)propertiesToObserveForDownloadableEpisodes;
+ (id)topLevelPlaylistsPredicate;

- (void)setNeedsUpdate:(char)a0;
- (char)needsUpdate;
- (long long)mt_syncID;
- (void)setMediaLibraryId:(long long)a0;

@end
