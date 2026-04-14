@class MPCPlaybackEngine, MPCLyricsReportingController;

@interface _MPCReportingController : NSObject

@property (retain, nonatomic) MPCLyricsReportingController *lyricsReportingController;
@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;

- (void).cxx_destruct;
- (id)initWithPlaybackEngine:(id)a0;
- (void)recordLyricsViewEvent:(id)a0;

@end
