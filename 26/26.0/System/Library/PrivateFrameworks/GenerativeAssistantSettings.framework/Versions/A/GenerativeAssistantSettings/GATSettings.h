@interface GATSettings : NSObject

+ (BOOL)isEnabled;
+ (long long)accountType;
+ (long long)getGenAIAgent;
+ (BOOL)setupPrompt;
+ (void)syncSharedPreferences;
+ (BOOL)useConfirmationPrompts;

- (id)init;

@end
