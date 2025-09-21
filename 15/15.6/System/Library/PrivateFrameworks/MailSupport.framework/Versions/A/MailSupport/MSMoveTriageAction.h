@class EMMailbox, ECMessageFlagChange;

@interface MSMoveTriageAction : MSTriageAction {
    EMMailbox *_destinationMailbox;
    long long _destinationMailboxType;
    ECMessageFlagChange *_flagChange;
    char _copyMessages;
}

- (void).cxx_destruct;
- (id)_changeAction;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 destinationMailbox:(id)a4 flagChange:(id)a5 copyMessages:(char)a6;
- (id)initWithMessageListSelection:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 destinationMailboxType:(long long)a4 flagChange:(id)a5 copyMessages:(char)a6;
- (id)initWithQuery:(id)a0 origin:(long long)a1 actor:(long long)a2 delegate:(id)a3 destinationMailboxType:(long long)a4 flagChange:(id)a5 copyMessages:(char)a6;

@end
