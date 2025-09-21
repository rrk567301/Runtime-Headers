@class NSString;

@interface IMAPRenameCommand : IMAPMailboxCommand

@property (copy) NSString *nameForNewMailbox;
@property (copy) NSString *nameForNewMailboxArgument;

- (id)activityString;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (id)detailsString;
- (id)initWithMailboxName:(id)a0 newMailboxName:(id)a1;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
