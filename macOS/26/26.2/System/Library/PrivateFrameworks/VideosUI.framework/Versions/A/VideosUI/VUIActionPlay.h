@class VUIAppContext, NSString, MPMediaItem, NSArray, NSDictionary, NSDate;

@interface VUIActionPlay : VUIAction

@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback;
@property (retain, nonatomic) MPMediaItem *mpMediaItem;
@property (retain, nonatomic) NSString *sidebandLibraryAdamID;
@property (nonatomic) long long watchType;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic) BOOL isRentAndWatchNow;
@property (nonatomic) BOOL playRequiresAccount;
@property (readonly, nonatomic) NSArray *multiviewPlayables;
@property (retain, nonatomic) NSString *multiviewDistribution;
@property (readonly, nonatomic) NSString *playType;
@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) VUIAppContext *appContext;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (void)_playMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 isFeaturedMultiview:(BOOL)a2 watchType:(long long)a3 extrasInfo:(id)a4 playType:(id)a5 isRentAndWatchNow:(BOOL)a6 targetResponder:(id)a7 completion:(id /* block */)a8;
+ (void)_playPlayables:(id)a0 multiviewPlayables:(id)a1 isFeaturedMultiview:(BOOL)a2 appContext:(id)a3 watchType:(long long)a4 isUpNextPlayback:(BOOL)a5 userPlaybackInitiationDate:(id)a6 openURLCompletionDate:(id)a7 playType:(id)a8 playbackContext:(unsigned long long)a9 targetResponder:(id)a10;
+ (void)playMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 isFeaturedMultiview:(BOOL)a2 watchType:(long long)a3 isRentAndWatchNow:(BOOL)a4;
+ (void)playMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 isFeaturedMultiview:(BOOL)a2 watchType:(long long)a3 isRentAndWatchNow:(BOOL)a4 completion:(id /* block */)a5;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;
+ (void)presentPlaybackWithMediaInfo:(id)a0 multiviewMediaInfos:(id)a1 extrasInfo:(id)a2 isCoWatching:(BOOL)a3 watchType:(long long)a4 playType:(id)a5 isFeaturedMultiview:(BOOL)a6 allowsCellular:(BOOL)a7 previewMetadata:(id)a8 targetResponder:(id)a9 completion:(id /* block */)a10;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (id)initWithMPMediaItem:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (id)initWithSidebandAdamID:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (id)initWithVideosPlayables:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldPunchoutToTVApp;

@end
