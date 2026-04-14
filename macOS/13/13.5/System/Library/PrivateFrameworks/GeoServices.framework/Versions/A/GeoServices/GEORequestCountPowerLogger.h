@interface GEORequestCountPowerLogger : NSObject

+ (id)sharedInstance;
+ (void)registerXPCActivity;

- (void)incrementCountForClient:(id)a0 requestType:(int)a1;

@end
