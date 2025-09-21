@interface DEDDirectoriesCleanup : NSObject

+ (void)run;
+ (char)isDryRun;
+ (char)shouldRun;
+ (void)didRun;

@end
