@class NSString, NSArray, NSDate;

@interface BMMediaNowPlaying : BMEventBase <BMStoreData> {
    char _hasRaw_absoluteTimestamp;
    double _raw_absoluteTimestamp;
}

@property (class, readonly, nonatomic) unsigned int latestDataVersion;

@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) NSDate *absoluteTimestamp;
@property (readonly, nonatomic) int playbackState;
@property (readonly, nonatomic) NSString *album;
@property (readonly, nonatomic) NSString *artist;
@property (readonly, nonatomic) unsigned int duration;
@property (nonatomic) char hasDuration;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned int elapsed;
@property (nonatomic) char hasElapsed;
@property (readonly, nonatomic) NSString *mediaType;
@property (readonly, nonatomic) NSString *iTunesStoreIdentifier;
@property (readonly, nonatomic) NSString *iTunesSubscriptionIdentifier;
@property (readonly, nonatomic) char isAirPlayVideo;
@property (nonatomic) char hasIsAirPlayVideo;
@property (readonly, nonatomic) NSArray *outputDevices;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *iTunesArtistIdentifier;
@property (readonly, nonatomic) NSString *iTunesAlbumIdentifier;
@property (readonly, nonatomic) NSString *groupIdentifier;
@property (readonly, nonatomic) char isRemoteControl;
@property (nonatomic) char hasIsRemoteControl;
@property (readonly, nonatomic) int itemMediaType;
@property (readonly, nonatomic) int itemMediaSubtype;
@property (readonly, nonatomic) char isAirPlayActive;
@property (nonatomic) char hasIsAirPlayActive;
@property (readonly, nonatomic) char parentGroupContainsDiscoverableGroupLeader;
@property (nonatomic) char hasParentGroupContainsDiscoverableGroupLeader;
@property (readonly, nonatomic) char excludeFromSuggestions;
@property (nonatomic) char hasExcludeFromSuggestions;
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)eventWithData:(id)a0 dataVersion:(unsigned int)a1;
+ (id)columns;
+ (id)validKeyPaths;
+ (id)protoFields;

- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)jsonDictionary;
- (void)writeTo:(id)a0;
- (id)serialize;
- (id)initWithJSONDictionary:(id)a0 error:(id *)a1;
- (id)initByReadFrom:(id)a0;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 playbackState:(int)a2 album:(id)a3 artist:(id)a4 duration:(id)a5 genre:(id)a6 title:(id)a7 elapsed:(id)a8 mediaType:(id)a9 iTunesStoreIdentifier:(id)a10 iTunesSubscriptionIdentifier:(id)a11 isAirPlayVideo:(id)a12 outputDevices:(id)a13 bundleID:(id)a14 iTunesArtistIdentifier:(id)a15 iTunesAlbumIdentifier:(id)a16 groupIdentifier:(id)a17 isRemoteControl:(id)a18 itemMediaType:(int)a19 itemMediaSubtype:(int)a20 isAirPlayActive:(id)a21 parentGroupContainsDiscoverableGroupLeader:(id)a22;
- (id)_outputDevicesJSONArray;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 playbackState:(int)a2 album:(id)a3 artist:(id)a4 duration:(id)a5 genre:(id)a6 title:(id)a7 elapsed:(id)a8 mediaType:(id)a9 iTunesStoreIdentifier:(id)a10 iTunesSubscriptionIdentifier:(id)a11 isAirPlayVideo:(id)a12 outputDevices:(id)a13 bundleID:(id)a14 iTunesArtistIdentifier:(id)a15 iTunesAlbumIdentifier:(id)a16 groupIdentifier:(id)a17 isRemoteControl:(id)a18 itemMediaType:(int)a19 itemMediaSubtype:(int)a20;
- (id)initWithUniqueID:(id)a0 absoluteTimestamp:(id)a1 playbackState:(int)a2 album:(id)a3 artist:(id)a4 duration:(id)a5 genre:(id)a6 title:(id)a7 elapsed:(id)a8 mediaType:(id)a9 iTunesStoreIdentifier:(id)a10 iTunesSubscriptionIdentifier:(id)a11 isAirPlayVideo:(id)a12 outputDevices:(id)a13 bundleID:(id)a14 iTunesArtistIdentifier:(id)a15 iTunesAlbumIdentifier:(id)a16 groupIdentifier:(id)a17 isRemoteControl:(id)a18 itemMediaType:(int)a19 itemMediaSubtype:(int)a20 isAirPlayActive:(id)a21 parentGroupContainsDiscoverableGroupLeader:(id)a22 excludeFromSuggestions:(id)a23;

@end
