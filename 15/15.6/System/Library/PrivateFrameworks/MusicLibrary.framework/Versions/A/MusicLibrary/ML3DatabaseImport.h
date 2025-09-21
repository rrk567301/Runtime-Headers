@class NSString, NSData, NSFileHandle, NSObject;
@protocol OS_tcc_identity;

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) NSString *libraryPath;
@property (readonly, nonatomic) NSData *trackData;
@property (readonly, nonatomic) NSData *playlistData;
@property (readonly, nonatomic) NSData *albumArtistData;
@property (readonly, nonatomic) NSData *albumData;
@property (readonly, nonatomic) NSFileHandle *fileHandle;
@property (readonly, nonatomic) NSString *syncAnchor;
@property (readonly, nonatomic, getter=isResetSync) char resetSync;
@property (readonly, nonatomic, getter=isSagaEnabled) char sagaEnabled;
@property (readonly, nonatomic) long long storeAccountID;
@property (readonly, nonatomic) long long preferredVideoQuality;
@property (readonly, nonatomic) unsigned int homeSharingBasePlaylistID;
@property (nonatomic) char clientInitiatedReset;
@property (readonly, nonatomic) char tracksAreLibraryOwnedContent;
@property (readonly, nonatomic) char playlistsAreLibraryOwnedContent;
@property (readonly, nonatomic, getter=isPendingMatch) char pendingMatch;
@property (readonly, nonatomic) char isServerImport;
@property (readonly, nonatomic) char pairedDeviceCanProcessStandaloneCollections;
@property (readonly, nonatomic) NSString *syncLibraryID;
@property (readonly, nonatomic, getter=isSuspendable) char suspendable;
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2 albumArtistData:(id)a3 albumData:(id)a4 clientIdentity:(id)a5;
- (id)initWithLibraryPath:(id)a0 trackData:(id)a1 playlistData:(id)a2 clientIdentity:(id)a3;

@end
