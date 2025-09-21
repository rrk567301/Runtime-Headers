@interface CloudTelemetry : NSObject

+ (char)reportWithTeamID:(id)a0 eventName:(id)a1 event:(id)a2 error:(id *)a3;
+ (char)reportWithTeamID:(id)a0 eventType:(id)a1 event:(id)a2 error:(id *)a3;
+ (char)setupXpcServiceActivitiesAndReturnError:(id *)a0;

- (id)init;

@end
