@class NSString;

@interface ATXTimeBasedInferredActivityBiomeStream : NSObject <ATXUnifiedInferredActivityBiomeStreamProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_addBedtimeTransitionsForDate:(id)a0 calendar:(id)a1 toArray:(id)a2;
- (void)_addHomeTransitionsForDate:(id)a0 calendar:(id)a1 toArray:(id)a2;
- (void)_addTransitionForDate:(id)a0 transitionHour:(long long)a1 transitionMinute:(long long)a2 calendar:(id)a3 isEntry:(char)a4 activity:(unsigned long long)a5 toArray:(id)a6;
- (void)_addWorkTransitionsForDate:(id)a0 calendar:(id)a1 toArray:(id)a2;
- (id)sessionPublisherFromStartTime:(double)a0;
- (id)transitionPublisherFromStartTime:(double)a0;

@end
