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

- (void)updateDeprecatedContentInfo;
- (void)updateSelectedContentInfo;
- (void)updateAudioFormatContentInfo;
- (void)updateDeprecatedApplication;
- (id)firstContentInfoMatchingSet:(id)a0 contentInfos:(id)a1;
- (void)contentInfoDidChange:(id)a0;
- (id)displayNameForBundleID:(id)a0;
- (void)updateForegroundBundleID;
- (void).cxx_destruct;
- (id)faceTimeBundleSet;
- (id)init;
- (void)activeClientDidChange:(id)a0;
- (id)description;
- (id)firstEligibleContentInfoFor:(id)a0;
- (id)contentInfoForBundleID:(id)a0 contentInfos:(id)a1;
- (void)dealloc;
- (void)updateActiveClient;

@end
