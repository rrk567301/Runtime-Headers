@class NSDictionary;

@interface _CDEventStreams : NSObject

@property (nonatomic) BOOL allStreamsLoaded;
@property (readonly, nonatomic) NSDictionary *allEventStreams;
@property (readonly, nonatomic) NSDictionary *allKBEventStreams;

+ (id)sharedInstance;
+ (id)privacyPolicyForEventStreamName:(id)a0;
+ (id)rateLimiterForEventStreamName:(id)a0;
+ (id)eventStreamPropertiesForKBName:(id)a0;
+ (id)ephemeralitySchedule;
+ (id)eventStreamPropertiesForEventStream:(id)a0;
+ (id)eventStreamPropertiesForName:(id)a0;
+ (void)loadAllEventStreams;
+ (id)eventStreamForName:(id)a0;

- (void)setAllKBEventStreams:(id)a0;
- (id)_eventStreamForName:(id)a0 orKBName:(id)a1;
- (void)setAllEventStreams:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
