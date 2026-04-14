@class ATXCoreDuetContextHelper, ATXNowPlayingEvent;

@interface ATXNowPlayingDataProvider : NSObject {
    ATXCoreDuetContextHelper *_coreDuetContextHelper;
    ATXNowPlayingEvent *_lastNowPlayingEvent;
}

- (void).cxx_destruct;
- (id)init;
- (id)currentNowPlayingEvent;
- (BOOL)isTVExperienceAppNowPlaying;

@end
