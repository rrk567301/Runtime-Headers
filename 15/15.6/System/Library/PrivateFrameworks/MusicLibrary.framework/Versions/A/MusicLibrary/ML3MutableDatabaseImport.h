@class NSString, NSData, NSFileHandle;

@interface ML3MutableDatabaseImport : ML3DatabaseImport

@property (copy, nonatomic) NSString *libraryPath;
@property (copy, nonatomic) NSData *trackData;
@property (copy, nonatomic) NSData *playlistData;
@property (copy, nonatomic) NSData *albumArtistData;
@property (copy, nonatomic) NSData *albumData;
@property (retain, nonatomic) NSFileHandle *fileHandle;
@property (copy, nonatomic) NSString *syncAnchor;
@property (nonatomic, getter=isResetSync) char resetSync;
@property (nonatomic, getter=isSagaEnabled) char sagaEnabled;
@property (nonatomic) long long storeAccountID;
@property (nonatomic) long long preferredVideoQuality;
@property (nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) char tracksAreLibraryOwnedContent;
@property (nonatomic) char playlistsAreLibraryOwnedContent;
@property (nonatomic, getter=isPendingMatch) char pendingMatch;
@property (nonatomic) char isServerImport;
@property (nonatomic) char pairedDeviceCanProcessStandaloneCollections;
@property (copy, nonatomic) NSString *syncLibraryID;
@property (nonatomic, getter=isSuspendable) char suspendable;
@property (nonatomic) char clientInitiatedReset;

- (void)setFileHandle:(id)a0;
- (void)setSyncAnchor:(id)a0;
- (void)setLibraryPath:(id)a0;
- (void)setSuspendable:(char)a0;
- (void)setPreferredVideoQuality:(long long)a0;
- (void)setStoreAccountID:(long long)a0;
- (void)setSagaEnabled:(char)a0;
- (void)setHomeSharingBasePlaylistID:(unsigned int)a0;
- (void)setIsServerImport:(char)a0;
- (void)setPairedDeviceCanProcessStandaloneCollections:(char)a0;
- (void)setPendingMatch:(char)a0;
- (void)setPlaylistData:(id)a0;
- (void)setPlaylistsAreLibraryOwnedContent:(char)a0;
- (void)setResetSync:(char)a0;
- (void)setSyncLibraryID:(id)a0;
- (void)setTrackData:(id)a0;
- (void)setTracksAreLibraryOwnedContent:(char)a0;

@end
