@interface _CDPaths : NSObject

+ (id)eventPlistPath;
+ (id)contentProviderBundlePaths;
+ (id)knowledgeDirectory;
+ (id)userKnowledgeDirectory;
+ (id)bundleBuiltInPlugInsPath;
+ (id)contentProvidersPath;
+ (id)bundlePathForResource:(id)a0 ofType:(id)a1;
+ (id)knowledgeTestDirectory;
+ (id)simulatorSystemPathFor:(id)a0 withEnvVar:(id)a1;
+ (id)simulatorHomePathFor:(id)a0;
+ (id)simulatorSharedPathFor:(id)a0;
+ (id)otaSleepPath;
+ (id)defaultSleepPath;
+ (id)peopleDirectory;
+ (id)modelDirectory;
+ (id)policiesConfigPath;
+ (id)monitorBundlePath;
+ (id)DKKnowledgeTestDirectoryString;
+ (id)interactionTestDirectory;
+ (id)interactionCopyDirectory;
+ (id)defaultSessionPathForDataCollection;
+ (id)defaultDirectoryPathForDataCollection;

@end
