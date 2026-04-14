@interface BMDSLTransforms : NSObject

+ (id)allowedClasses;
+ (id)durationForEventWithTimestamp:(id)a0 isStart:(id)a1 key:(id)a2 keyName:(id)a3 startEventsState:(id)a4 metadata:(id)a5;
+ (id)arrayTuplesToDictionary:(id)a0;
+ (id)durationForEventWithTimestamp:(id)a0 isStart:(id)a1 key:(id)a2 startEventsState:(id)a3;
+ (id)allowedTransforms;

@end
