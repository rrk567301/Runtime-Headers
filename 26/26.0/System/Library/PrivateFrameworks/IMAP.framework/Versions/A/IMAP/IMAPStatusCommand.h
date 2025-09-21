@class NSDictionary;

@interface IMAPStatusCommand : IMAPMailboxCommand

@property unsigned long long dataItems;
@property (copy) NSDictionary *statusEntries;

- (id)activityString;
- (void).cxx_destruct;
- (id)initWithMailboxName:(id)a0;
- (id)_newStringForDataItems;
- (void)addDataItem:(unsigned long long)a0;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (id)initWithMailboxName:(id)a0 dataItems:(unsigned long long)a1;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
