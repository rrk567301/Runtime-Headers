@class NSString, NSDictionary;

@interface IMAPUIDCopyOrMoveCommand : IMAPUIDCommand

@property (copy) NSString *destinationMailboxName;
@property (copy) NSString *destinationMailboxArgumentName;
@property (copy) NSDictionary *messageInfo;
@property char shouldTryCreate;

- (void).cxx_destruct;
- (id)activityString;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (id)detailsString;
- (char)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1;
- (id)initWithMailboxName:(id)a0 UIDs:(id)a1 destinationMailboxName:(id)a2;
- (id)initWithMailboxName:(id)a0 range:(struct { unsigned long long x0; unsigned long long x1; })a1;
- (id)newCommandDataForLiteralPlus:(char)a0;

@end
