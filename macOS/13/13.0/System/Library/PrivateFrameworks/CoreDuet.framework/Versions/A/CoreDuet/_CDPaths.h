@interface _CDPaths : NSObject

+ (id)bundlePathForResource:(id)a0 ofType:(id)a1;
+ (id)bundleBuiltInPlugInsPath;
+ (id)simulatorSystemPathFor:(id)a0 withEnvVar:(id)a1;
+ (id)simulatorHomePathFor:(id)a0;
+ (id)simulatorSharedPathFor:(id)a0;
+ (id)eventPlistPath;
+ (id)otaSleepPath;
+ (id)defaultSleepPath;
+ (id)peopleDirectory;
+ (id)modelDirectory;
+ (id)knowledgeDirectory;
+ (id)userKnowledgeDirectory;
+ (id)policiesConfigPath;
+ (id)monitorBundlePath;
+ (id)knowledgeTestDirectory;
+ (id)DKKnowledgeTestDirectoryString;
+ (id)interactionTestDirectory;
+ (id)interactionCopyDirectory;
+ (id)defaultSessionPathForDataCollection;
+ (id)defaultDirectoryPathForDataCollection;

@end
