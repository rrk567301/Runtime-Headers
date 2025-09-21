@interface AppStateMonitor : NSObject

+ (id)foregroundAppKeys;
+ (id)getAppsWithStates;
+ (char)hasAnyForegroundApp;

@end
