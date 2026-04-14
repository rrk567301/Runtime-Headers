@class VUIAppContext, NSString, MPMediaItem, NSDictionary, NSArray, NSDate;

@interface VUIActionPlay : VUIAction

@property (nonatomic, getter=isUpNextPlayback) BOOL upNextPlayback;
@property (retain, nonatomic) MPMediaItem *mpMediaItem;
@property (retain, nonatomic) NSString *sidebandLibraryAdamID;
@property (nonatomic) long long watchType;
@property (nonatomic) unsigned long long playbackContext;
@property (nonatomic) BOOL isRentAndWatchNow;
@property (nonatomic) BOOL playRequiresAccount;
@property (nonatomic) BOOL isCarPlay;
@property (readonly, nonatomic) NSString *playType;
@property (retain, nonatomic) NSDictionary *contextData;
@property (retain, nonatomic) NSArray *videosPlayables;
@property (weak, nonatomic) VUIAppContext *appContext;
@property (retain, nonatomic) NSDate *userPlaybackInitiationDate;
@property (retain, nonatomic) NSDate *openURLCompletionDate;

+ (void)_playMediaInfo:(id)a0 watchType:(long long)a1 extrasInfo:(id)a2 playType:(id)a3 isRentAndWatchNow:(BOOL)a4 isCarPlay:(BOOL)a5 targetResponder:(id)a6 completion:(id /* block */)a7;
+ (void)_playMediaInfo:(id)a0 watchType:(long long)a1 extrasInfo:(id)a2 playType:(id)a3 isRentAndWatchNow:(BOOL)a4 targetResponder:(id)a5 completion:(id /* block */)a6;
+ (void)_playPlayables:(id)a0 appContext:(id)a1 watchType:(long long)a2 isUpNextPlayback:(BOOL)a3 isCarPlay:(BOOL)a4 userPlaybackInitiationDate:(id)a5 openURLCompletionDate:(id)a6 playType:(id)a7 playbackContext:(unsigned long long)a8 targetResponder:(id)a9;
+ (void)_playPlayables:(id)a0 appContext:(id)a1 watchType:(long long)a2 isUpNextPlayback:(BOOL)a3 userPlaybackInitiationDate:(id)a4 openURLCompletionDate:(id)a5 playType:(id)a6 playbackContext:(unsigned long long)a7 targetResponder:(id)a8;
+ (void)_reportWillPlayIntentEvent:(id)a0;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2;
+ (void)playMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(BOOL)a2 completion:(id /* block */)a3;
+ (void)presentPlaybackWithMediaInfo:(id)a0 extrasInfo:(id)a1 isCoWatching:(BOOL)a2 watchType:(long long)a3 playType:(id)a4 allowsCellular:(BOOL)a5 previewMetadata:(id)a6 targetResponder:(id)a7 completion:(id /* block */)a8;

- (void).cxx_destruct;
- (id)initWithContextData:(id)a0 appContext:(id)a1;
- (id)initWithMPMediaItem:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3 isCarPlay:(BOOL)a4;
- (id)initWithSidebandAdamID:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (id)initWithVideosPlayables:(id)a0 watchType:(long long)a1 playbackContext:(unsigned long long)a2 isRentAndWatchNow:(BOOL)a3;
- (BOOL)isAccountRequired;
- (void)performWithTargetResponder:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldPunchoutToTVApp;

@end
