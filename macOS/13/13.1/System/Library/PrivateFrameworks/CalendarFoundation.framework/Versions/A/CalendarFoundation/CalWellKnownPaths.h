@interface CalWellKnownPaths : NSObject

+ (void)initialize;
+ (id)realHomeDirectoryPath;
+ (void)resetPaths;
+ (BOOL)checkOrCreatePath:(id)a0;
+ (id)calendarFileHandlerPath;
+ (id)eventsPendingChangesPath;

@end
