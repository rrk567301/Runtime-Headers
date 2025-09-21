@class MFMailbox, EMBlockedSenderManager, NSString, NSColor;

@interface MFBlockedSenderRule : MFMessageRule {
    char _shouldTransferMessage;
    char _shouldNotifyUser;
    char _shouldSendNotification;
    char _isDefaultRule;
    int _autoResponseType;
    NSString *_ruleName;
    long long _flagsToApply;
    NSString *_appleScriptPath;
    NSColor *_color;
    NSString *_playSound;
    MFMailbox *_destinationMailbox;
}

@property (retain, nonatomic) EMBlockedSenderManager *blockedSenderManager;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (char)isActive;
- (id)color;
- (void)setColor:(id)a0;
- (void)setIsActive:(char)a0;
- (char)shouldSendNotification;
- (id)ruleName;
- (id)appleScriptPath;
- (int)autoResponseType;
- (id)destinationMailbox;
- (char)doesMessageSatisfyCriteria:(id)a0 fetchBody:(char)a1 needsBody:(char *)a2 successfullyEvaluated:(char *)a3;
- (long long)flagsToApply;
- (id)initWithBlockedSenderManager:(id)a0;
- (char)isDefaultRule;
- (id)playSound;
- (void)setAppleScriptPath:(id)a0;
- (void)setAutoResponseType:(int)a0;
- (void)setDestinationMailbox:(id)a0;
- (void)setFlagsToApply:(long long)a0;
- (void)setIsDefaultRule:(char)a0;
- (void)setPlaySound:(id)a0;
- (void)setRuleName:(id)a0;
- (void)setShouldNotifyUser:(char)a0;
- (void)setShouldSendNotification:(char)a0;
- (void)setShouldTransferMessage:(char)a0;
- (char)shouldNotifyUser;
- (char)shouldTransferMessage;

@end
