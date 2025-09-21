@class IMAPMailbox;

@interface IMAPSelectCommand : IMAPMailboxCommand {
    char _delayed;
}

@property (retain) IMAPMailbox *imapMailbox;
@property char useCondStore;
@property char delayed;
@property (readonly) char readOnly;

+ (char)automaticallyNotifiesObserversOfDelayed;

- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (char)handlesAllUntaggedResponses;
- (id)newCommandDataForLiteralPlus:(char)a0;

@end
