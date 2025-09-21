@class NSString, NSArray;

@interface ATXFakeModeEventProvider : NSObject <ATXModeEntityEventProviderProtocol> {
    NSArray *_modeEvents;
    char _wasInitializedWithoutEntity;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)dateIntervalFromEvent:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)eventsFromPublisher;
- (id)initWithEventDateIntervals:(id)a0;
- (id)initWithModeEvents:(id)a0 expectsNilEntity:(char)a1;
- (char)isEventFromProvider:(id)a0;
- (char)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(char)a2;

@end
