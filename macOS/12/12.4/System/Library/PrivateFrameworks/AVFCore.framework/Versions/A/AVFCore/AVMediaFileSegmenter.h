@class NSURL, NSString, NSError;

@interface AVMediaFileSegmenter : NSObject {
    struct AVMediaFileSegmenterInternal { id x0; id x1; id x2; id x3; BOOL x4; long long x5; id x6; float x7; id x8; id x9; struct OpaqueFigMediaFileSegmenter *x10; id /* block */ x11; struct { long long x0; int x1; unsigned int x2; long long x3; } x12; id x13; BOOL x14; } *_mediaFileSegmenter;
}

@property (copy, nonatomic) NSURL *outputURL;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } targetSegmentDuration;
@property (copy, nonatomic) NSString *mediaPlaylistName;
@property (nonatomic) BOOL segmentsAudioOnly;
@property (copy, nonatomic) NSString *IFramePlaylistName;
@property (readonly, nonatomic) long long status;
@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) float progress;

+ (id)_figMediaFileSegmenterNotificationNames;
+ (id)mediaFileSegmenterWithAsset:(id)a0 options:(id)a1;

- (void)dealloc;
- (id)description;
- (id)init;
- (id)asset;
- (void)_updateProgress;
- (void)_transitionToStatus:(long long)a0 error:(id)a1;
- (id)initWithAsset:(id)a0 options:(id)a1;
- (void)_createFigMediaFileSegmenterAndBeginSegmenting;
- (void)_removeListeners;
- (id)_createFigMediaFileSegmenter:(struct OpaqueFigMediaFileSegmenter **)a0;
- (void)_addListeners;
- (void)cancelMediaFileSegmentation;
- (void)segmentMediaFileAsynchronouslyWithCompletionHandler:(id /* block */)a0;
- (void)_handleFigMediaFileSegmenterNotification:(id)a0 payload:(id)a1;

@end
