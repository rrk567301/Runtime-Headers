@class _INPBPrivatePlayMediaIntentData, _INPBTimestamp, NSArray, _INPBIntentMetadata, NSString, _INPBString, _INPBMediaItemValue, _INPBMediaSearch;

@interface _INPBPlayMediaIntent : PBCodable <_INPBPlayMediaIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char parsecCategory : 1; unsigned char playShuffled : 1; unsigned char playbackQueueLocation : 1; unsigned char playbackRepeatMode : 1; unsigned char playbackSpeed : 1; unsigned char resumePlayback : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *alternativeResults;
@property (readonly, nonatomic) unsigned long long alternativeResultsCount;
@property (copy, nonatomic) NSArray *audioSearchResults;
@property (readonly, nonatomic) unsigned long long audioSearchResultsCount;
@property (retain, nonatomic) _INPBString *audiobookAuthor;
@property (readonly, nonatomic) char hasAudiobookAuthor;
@property (retain, nonatomic) _INPBString *audiobookTitle;
@property (readonly, nonatomic) char hasAudiobookTitle;
@property (copy, nonatomic) NSArray *buckets;
@property (readonly, nonatomic) unsigned long long bucketsCount;
@property (retain, nonatomic) _INPBTimestamp *expirationDate;
@property (readonly, nonatomic) char hasExpirationDate;
@property (copy, nonatomic) NSArray *hashedRouteUIDs;
@property (readonly, nonatomic) unsigned long long hashedRouteUIDsCount;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBMediaItemValue *mediaContainer;
@property (readonly, nonatomic) char hasMediaContainer;
@property (copy, nonatomic) NSArray *mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (retain, nonatomic) _INPBMediaSearch *mediaSearch;
@property (readonly, nonatomic) char hasMediaSearch;
@property (retain, nonatomic) _INPBString *mediaUserContext;
@property (readonly, nonatomic) char hasMediaUserContext;
@property (retain, nonatomic) _INPBString *musicArtistName;
@property (readonly, nonatomic) char hasMusicArtistName;
@property (nonatomic) int parsecCategory;
@property (nonatomic) char hasParsecCategory;
@property (nonatomic) char playShuffled;
@property (nonatomic) char hasPlayShuffled;
@property (nonatomic) int playbackQueueLocation;
@property (nonatomic) char hasPlaybackQueueLocation;
@property (nonatomic) int playbackRepeatMode;
@property (nonatomic) char hasPlaybackRepeatMode;
@property (nonatomic) double playbackSpeed;
@property (nonatomic) char hasPlaybackSpeed;
@property (retain, nonatomic) _INPBString *playlistTitle;
@property (readonly, nonatomic) char hasPlaylistTitle;
@property (retain, nonatomic) _INPBPrivatePlayMediaIntentData *privatePlayMediaIntentData;
@property (readonly, nonatomic) char hasPrivatePlayMediaIntentData;
@property (copy, nonatomic) NSString *proxiedBundleIdentifier;
@property (readonly, nonatomic) char hasProxiedBundleIdentifier;
@property (copy, nonatomic) NSString *recoID;
@property (readonly, nonatomic) char hasRecoID;
@property (nonatomic) char resumePlayback;
@property (nonatomic) char hasResumePlayback;
@property (retain, nonatomic) _INPBString *showTitle;
@property (readonly, nonatomic) char hasShowTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)alternativeResultsType;
+ (Class)audioSearchResultsType;
+ (Class)bucketType;
+ (Class)hashedRouteUIDsType;
+ (Class)mediaItemsType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsPlaybackQueueLocation:(id)a0;
- (int)StringAsParsecCategory:(id)a0;
- (int)StringAsPlaybackRepeatMode:(id)a0;
- (void)clearMediaItems;
- (void)addAlternativeResults:(id)a0;
- (void)addAudioSearchResults:(id)a0;
- (void)addBucket:(id)a0;
- (void)addHashedRouteUIDs:(id)a0;
- (void)addMediaItems:(id)a0;
- (id)alternativeResultsAtIndex:(unsigned long long)a0;
- (id)audioSearchResultsAtIndex:(unsigned long long)a0;
- (id)bucketAtIndex:(unsigned long long)a0;
- (void)clearAlternativeResults;
- (void)clearAudioSearchResults;
- (void)clearBuckets;
- (void)clearHashedRouteUIDs;
- (id)hashedRouteUIDsAtIndex:(unsigned long long)a0;
- (id)mediaItemsAtIndex:(unsigned long long)a0;
- (id)parsecCategoryAsString:(int)a0;
- (id)playbackQueueLocationAsString:(int)a0;
- (id)playbackRepeatModeAsString:(int)a0;

@end
