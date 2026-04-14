@class _DKEventStatsCounterInternal;

@interface _DKEventTypeStatsCounter : NSObject <_DKEventStatsCounterInternalProperty>

@property (retain) _DKEventStatsCounterInternal *internal;

- (id)eventType;
- (id)eventName;
- (void).cxx_destruct;
- (id)typeValues;

@end
