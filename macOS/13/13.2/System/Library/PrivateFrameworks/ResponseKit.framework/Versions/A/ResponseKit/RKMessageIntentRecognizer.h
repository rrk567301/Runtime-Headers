@interface RKMessageIntentRecognizer : NSObject

+ (id)sharedManager;
+ (id)getRangesOfKeywords:(id)a0 forMessage:(id)a1;

- (void)dealloc;
- (id)init;
- (void *)getMessageIntentRecognizer:(id)a0;
- (id)copyAttributedTokensForMessage:(id)a0 conversationTurns:(id)a1 metadata:(id)a2 languageID:(id)a3;

@end
