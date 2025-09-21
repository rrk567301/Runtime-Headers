@interface GATSettings : NSObject

+ (char)isEnabled;
+ (long long)accountType;
+ (long long)getGenAIAgent;
+ (char)setupPrompt;
+ (char)useConfirmationPrompts;

- (id)init;

@end
