@class NSArray;

@interface AMPDesktopUI.TrackTableLockupTestModel : NSObject <AMPDesktopUI.TrackTableLockupModel> {
    void /* unknown type, empty encoding */ tracks;
    void /* unknown type, empty encoding */ nextTrackNumber;
}

@property (nonatomic, copy) NSArray *tracks;
@property (nonatomic) void /* unknown type, empty encoding */ showArtwork;
@property (nonatomic) void /* unknown type, empty encoding */ showArtist;
@property (nonatomic) void /* unknown type, empty encoding */ showAlbum;

- (id)init;
- (void).cxx_destruct;
- (void)generateMoreTracks:(long long)a0;
- (void)generateMoreTracks:(long long)a0 onlyShortTracks:(BOOL)a1;

@end
