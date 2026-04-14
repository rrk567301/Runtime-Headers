@interface iLifeDebug : NSObject

+ (void)loadOnce;
+ (id)debugAssertBehaviorFilePath;
+ (void)writeDebugAssertBehaviorStringToDisk:(id)a0;
+ (void)removeDebugAssertBehaviorFile;
+ (void)writeDebugAssertBehaviorValueToDisk:(int)a0;
+ (void)evaluateDebugAssertBehaviorSettings;
+ (void)readDebugAssertBehaviorFromDisk;
+ (BOOL)handledAsDebugAssertBehaviorURL:(id)a0;

@end
