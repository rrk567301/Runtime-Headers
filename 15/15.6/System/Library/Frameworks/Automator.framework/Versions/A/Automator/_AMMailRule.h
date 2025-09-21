@class NSString, NSArray, _AMMailMailbox;

@interface _AMMailRule : SBObject

@property int colorMessage;
@property char deleteMessage;
@property (copy) NSString *forwardText;
@property (copy) NSString *forwardMessage;
@property char markFlagged;
@property char markRead;
@property (copy) NSString *playSound;
@property (copy) NSArray *redirectMessage;
@property (copy) NSString *replyText;
@property (copy) id runScript;
@property char allConditionsMustBeMet;
@property (copy) _AMMailMailbox *copyMessage;
@property (copy) _AMMailMailbox *moveMessage;
@property char highlightTextUsingColor;
@property char enabled;
@property (copy) NSString *name;
@property char shouldCopyMessage;
@property char shouldMoveMessage;
@property char stopEvaluatingRules;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (id)ruleConditions;
- (void)saveIn:(id)a0 as:(int)a1;

@end
