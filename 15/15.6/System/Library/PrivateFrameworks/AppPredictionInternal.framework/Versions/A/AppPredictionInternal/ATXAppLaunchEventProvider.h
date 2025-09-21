@class NSString;

@interface ATXAppLaunchEventProvider : NSObject <ATXModeEntityEventProviderProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dateIntervalFromEvent:(id)a0;
- (id)aggregationEventsFromEvent:(id)a0;
- (id)biomePublisherWithBookmark:(id)a0;
- (id)eventsFromPublisher;
- (char)isEventFromProvider:(id)a0;
- (char)publisherIsCoreDuetWrapper;
- (void)updateEntitySpecificFeaturesDict:(id)a0 aggregationEvent:(id)a1 isLocalToMode:(char)a2;

@end
