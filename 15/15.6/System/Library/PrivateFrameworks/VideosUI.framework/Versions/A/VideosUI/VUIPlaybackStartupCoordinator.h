@class NSNumber, NSString, NSDictionary, VUIVideosPlayable, NSObject, VUIMediaInfo, TVPStateMachine;
@protocol VUIControllerPresenter;

@interface VUIPlaybackStartupCoordinator : NSObject

@property (retain, nonatomic) VUIMediaInfo *mediaInfo;
@property (nonatomic) long long watchType;
@property (nonatomic) char isRentAndWatchNow;
@property (nonatomic) char isCellularAllowed;
@property (nonatomic) char forceDownloadToStream;
@property (copy, nonatomic) id /* block */ completion;
@property (copy, nonatomic) NSString *adamID;
@property (copy, nonatomic) NSString *videoCanonicalID;
@property (copy, nonatomic) NSString *showCanonicalID;
@property (copy, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSDictionary *contentMetadata;
@property (retain, nonatomic) TVPStateMachine *stateMachine;
@property (retain, nonatomic) VUIVideosPlayable *resolvedPlayable;
@property (retain, nonatomic) NSNumber *requiredAgeForPlayback;
@property (retain, nonatomic) NSNumber *frequencyOfAgeConfirmation;
@property (retain, nonatomic) NSObject<VUIControllerPresenter> *presentingViewController;

+ (void)initialize;
+ (id)identifierForMediaInfo:(id)a0;
+ (id)startupCoordinatorWithMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(char)a2;
+ (id)startupCoordinators;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_registerStateMachineHandlers;
- (void)_addGroupActivityDayParamToPlayableAndMediaItem:(id)a0;
- (id)_addQueryParamsToSharedWatchURL:(id)a0 watchType:(long long)a1 groupActivityDay:(id)a2;
- (void)_configureFor2Dor3DWithPresentingController:(id)a0 completion:(id /* block */)a1;
- (id)_descriptionForStartupAction:(long long)a0;
- (id)_descriptionForWatchType:(long long)a0;
- (char)_metadataContainsAgeGate;
- (void)_performRatingAndAgeVerificationWithMediaItem:(id)a0 presentingController:(id)a1 completion:(id /* block */)a2;
- (void)_preflightPlaybackWithPlaylist:(id)a0 presentingViewController:(id)a1 completionHandler:(id /* block */)a2;
- (void)_registerGroupActivitiesNotification;
- (char)_shouldWarnStartingRentalPlaybackWindowWithMediaItem:(id)a0;
- (id)initWithAdamID:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(char)a2;
- (id)initWithAdamID:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(char)a2 contentMetadata:(id)a3;
- (id)initWithCanonicalID:(id)a0 showCanonicalID:(id)a1 mediaType:(id)a2 watchType:(long long)a3 isRentAndWatchNow:(char)a4;
- (id)initWithCanonicalID:(id)a0 showCanonicalID:(id)a1 mediaType:(id)a2 watchType:(long long)a3 isRentAndWatchNow:(char)a4 contentMetadata:(id)a5;
- (id)initWithMediaInfo:(id)a0 watchType:(long long)a1 isRentAndWatchNow:(char)a2;
- (void)performPlaybackStartupFlowWithCompletion:(id /* block */)a0;

@end
