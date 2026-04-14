@class NSArray;

@interface PPSCadence : NSObject

@property (readonly) NSArray *cadenceTuples;

+ (id)cadenceEventSBC;
+ (id)cadenceEventSBC_EventScreenStateChange;
+ (id)cadenceEventXPCWithFrequency:(int)a0;
+ (id)cadenceInit;
+ (id)cadenceInit_EventSBC;
+ (id)cadencePeriodic:(unsigned long long)a0;
+ (id)cadenceWithJSONObject:(id)a0;
+ (id)cadenceWithProto:(id)a0;
+ (BOOL)isValidCadenceJSON:(id)a0;

- (id)json;
- (id)proto;
- (void).cxx_destruct;
- (id)initWithCadenceTuples:(id)a0;

@end
