@class AMPLSharingClient, NSString, NSArray;

@interface AMPSPublicSharingPrefs : NSObject

@property (retain, nonatomic) AMPLSharingClient *client;
@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic, getter=isPasswordProtected) char passwordProtected;
@property (readonly, nonatomic) NSString *password;
@property (readonly, nonatomic, getter=areAllPlaylistsShared) char shareAllPlaylists;
@property (readonly, nonatomic) NSArray *playlists;

- (void).cxx_destruct;
- (id)initWithClient:(id)a0;
- (void)setShareAllPlaylists:(char)a0 withUpdatedPlaylists:(id)a1 withReply:(id /* block */)a2;
- (void)getConnectedClientCountWithReply:(id /* block */)a0;
- (void)setEnabled:(BOOL)a0 withReply:(id /* block */)a1;
- (void)setPasswordProtectionEnabled:(char)a0 withPassword:(id)a1 withReply:(id /* block */)a2;
- (void)updatePlaylists:(id)a0;
- (void)updatePrefs:(char)a0 withPasswordProtection:(char)a1 withPassword:(id)a2 withShareAllPlaylists:(char)a3 withPlaylists:(id)a4;

@end
