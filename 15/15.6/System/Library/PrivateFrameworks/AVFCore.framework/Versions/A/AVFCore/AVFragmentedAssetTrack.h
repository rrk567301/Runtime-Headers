@class AVFragmentedAssetTrackInternal;

@interface AVFragmentedAssetTrack : AVAssetTrack {
    AVFragmentedAssetTrackInternal *_fragmentedAssetTrack;
}

+ (char)expectsPropertyRevisedNotifications;

@end
