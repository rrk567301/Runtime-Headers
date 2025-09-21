@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)eventType;
- (id)eventName;
- (id)typeValues;
- (void).cxx_destruct;

@end
