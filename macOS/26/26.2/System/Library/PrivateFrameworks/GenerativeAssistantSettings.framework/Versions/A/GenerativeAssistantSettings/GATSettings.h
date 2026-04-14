@interface GATSettings : NSObject

+ (long long)accountType;
+ (BOOL)isEnabled;
+ (long long)getGenAIAgent;
+ (BOOL)setupPrompt;
+ (void)syncSharedPreferences;
+ (BOOL)useConfirmationPrompts;

- (id)init;

@end
