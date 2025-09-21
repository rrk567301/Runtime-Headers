@class FBSDisplayLayoutMonitor, NSArray, NSString, MRClient, MRNowPlayingAudioFormatContentInfo, NSObject, MRNowPlayingAudioFormatApplication;
@protocol OS_dispatch_queue, MRNowPlayingAudioFormatControllerDelegate;

@interface MRNowPlayingAudioFormatController : NSObject

@property (retain, nonatomic) NSArray *contentInfos;
@property (retain, nonatomic) MRClient *activeClient;
@property (retain, nonatomic) FBSDisplayLayoutMonitor *layoutMonitor;
@property (retain, nonatomic) NSString *foregroundBundleID;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (weak, nonatomic) id<MRNowPlayingAudioFormatControllerDelegate> delegate;
@property (readonly, nonatomic) MRNowPlayingAudioFormatApplication *audioFormatApplication;
@property (readonly, nonatomic) MRNowPlayingAudioFormatContentInfo *audioFormatContentInfo;
@property (readonly, copy, nonatomic) NSString *bundleID;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (readonly, nonatomic) BOOL hasNowPlayingApp;
@property (readonly, copy, nonatomic) NSString *audioFormatDescription;
@property (readonly, copy, nonatomic) NSString *bestAvailableAudioFormatDescription;
@property (readonly, nonatomic, getter=isMultichannel) BOOL multichannel;
@property (readonly, nonatomic) long long bestAvailableAudioFormat;
@property (readonly, nonatomic, getter=isEligibleForSpatialization) BOOL eligibleForSpatialization;

- (id)displayNameForBundleID:(id)a0;
- (void)dealloc;
- (void)contentInfoDidChange:(id)a0;
- (void)activeClientDidChange:(id)a0;
- (id)contentInfoForBundleID:(id)a0 contentInfos:(id)a1;
- (id)faceTimeBundleSet;
- (id)init;
- (void)updateDeprecatedApplication;
- (id)firstContentInfoMatchingSet:(id)a0 contentInfos:(id)a1;
- (void)updateDeprecatedContentInfo;
- (void)updateForegroundBundleID;
- (id)description;
- (void)updateActiveClient;
- (void)updateAudioFormatContentInfo;
- (void)updateSelectedContentInfo;
- (id)firstEligibleContentInfoFor:(id)a0;
- (void).cxx_destruct;

@end
