@class NSArray, NSDictionary, NSData, NSDate, MCActivityMonitor;

@interface IMAPAppendCommand : IMAPMailboxCommand

@property (retain) NSDate *dateReceived;
@property (copy) NSArray *serverFlags;
@property (copy) NSDictionary *messageInfo;
@property (retain) MCActivityMonitor *progressMonitor;
@property char shouldTryCreate;
@property (readonly, copy, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)activityString;
- (id)commandTypeString;
- (id)debugCommandStringWithAccount:(id)a0;
- (id)detailsString;
- (char)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 flags:(id)a1 dateReceived:(id)a2 data:(id)a3;
- (id)newCommandDataForLiteralPlus:(char)a0;
- (char)shouldSendAgainOnError;

@end
