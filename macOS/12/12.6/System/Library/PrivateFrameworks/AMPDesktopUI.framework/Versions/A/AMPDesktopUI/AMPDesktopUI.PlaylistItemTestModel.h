@class NSString;

@interface AMPDesktopUI.PlaylistItemTestModel : NSObject <AMPDesktopUI.PlaylistItemModel> {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ artworkID;
    void /* unknown type, empty encoding */ artist;
    void /* unknown type, empty encoding */ album;
    void /* unknown type, empty encoding */ genre;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ identifier;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, copy) NSString *artworkID;
@property (nonatomic) void /* unknown type, empty encoding */ trackNumber;
@property (nonatomic, copy) NSString *artist;
@property (nonatomic, copy) NSString *album;
@property (nonatomic, copy) NSString *genre;
@property (nonatomic) void /* unknown type, empty encoding */ year;
@property (nonatomic) void /* unknown type, empty encoding */ rating;
@property (nonatomic) void /* unknown type, empty encoding */ isExplicit;
@property (nonatomic) void /* unknown type, empty encoding */ isPlaying;
@property (nonatomic) void /* unknown type, empty encoding */ isBuffering;
@property (nonatomic) void /* unknown type, empty encoding */ downloadState;
@property (nonatomic) void /* unknown type, empty encoding */ duration;

- (id)init;
- (void).cxx_destruct;

@end
