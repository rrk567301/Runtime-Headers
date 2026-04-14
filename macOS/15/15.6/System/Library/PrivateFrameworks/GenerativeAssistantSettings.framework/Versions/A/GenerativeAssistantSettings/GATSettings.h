@interface GATSettings : NSObject

+ (BOOL)isEnabled;
+ (long long)accountType;
+ (long long)getGenAIAgent;
+ (BOOL)setupPrompt;
+ (BOOL)useConfirmationPrompts;

- (id)init;

@end
