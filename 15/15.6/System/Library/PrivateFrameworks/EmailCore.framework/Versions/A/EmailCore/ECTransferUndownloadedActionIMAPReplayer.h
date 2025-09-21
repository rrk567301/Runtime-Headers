@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>

@property (weak, nonatomic) id<ECIMAPLocalActionReplayerDelegate> delegate;
@property (retain, nonatomic) id<ECIMAPServerInterface> serverInterface;

- (void).cxx_destruct;
- (id)_copyAllMessages:(char)a0;
- (char)_deleteUIDs:(id)a0;
- (char)_moveAllMessages;
- (id)_uidIndexSet;
- (id)replayAction;

@end
