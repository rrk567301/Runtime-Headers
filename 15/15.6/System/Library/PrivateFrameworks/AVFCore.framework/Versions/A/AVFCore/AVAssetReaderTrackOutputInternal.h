@class NSString, AVAssetTrack, AVWeakReference, AVOutputSettings;

@interface AVAssetReaderTrackOutputInternal : NSObject {
    AVAssetTrack *track;
    AVOutputSettings *outputSettings;
    NSString *audioTimePitchAlgorithm;
    char appliesPreferredTrackTransform;
    char limitsImageQueueCapacityToOneFrame;
    AVWeakReference *weakReferenceToAttachedAdaptor;
}

@end
