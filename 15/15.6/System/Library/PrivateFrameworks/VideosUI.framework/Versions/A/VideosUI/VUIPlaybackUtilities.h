@interface VUIPlaybackUtilities : NSObject

+ (double)playedThresholdTimeForDuration:(double)a0;
+ (double)suggestedBookmarkTimeForElapsedTime:(double)a0 duration:(double)a1;
+ (char)isDownloadLimitError:(id)a0;
+ (char)isMPMediaLibraryAssociationError:(id)a0;
+ (char)isOutOfSpaceError:(id)a0;
+ (long long)playedStateForDuration:(double)a0 elapsedTime:(double)a1 hasBeenPlayed:(char)a2 playCount:(unsigned long long)a3;
+ (long long)playedStateForDuration:(double)a0 elapsedTime:(double)a1 hasBeenPlayed:(char)a2 playCount:(unsigned long long)a3 respectPlayCount:(char)a4;
+ (char)playerIsLive:(id)a0;
+ (void)updateReportingForStartOfPreloadedPlayer:(id)a0;
+ (id)updatedHLSURL:(id)a0 forPlaybackContext:(unsigned long long)a1;

@end
