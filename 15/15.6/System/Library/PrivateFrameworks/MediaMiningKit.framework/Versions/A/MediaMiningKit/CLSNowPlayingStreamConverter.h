@interface CLSNowPlayingStreamConverter : NSObject

@property (class, readonly, nonatomic) unsigned long long defaultOptions;

@property (nonatomic) unsigned long long options;

+ (id)recognizedMusicSources;

- (id)init;
- (char)_canUseEvent:(id)a0;
- (id)eventFromDuetKnoweledgeEvent:(id)a0;
- (id)eventsFromDuetKnowledgeEvents:(id)a0;

@end
