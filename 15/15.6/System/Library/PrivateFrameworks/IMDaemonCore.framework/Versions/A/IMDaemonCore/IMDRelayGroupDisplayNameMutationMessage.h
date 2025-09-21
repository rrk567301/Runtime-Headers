@class NSString;

@interface IMDRelayGroupDisplayNameMutationMessage : IMDRelayGroupMutationMessage

@property (copy, nonatomic) NSString *updatedName;

- (void).cxx_destruct;
- (id)createDictionary;
- (id)_initWithBlastDoorMessage:(id)a0;
- (id)initWithName:(id)a0 sender:(id)a1 service:(id)a2 groupID:(id)a3 originalGroupID:(id)a4 guid:(id)a5 destinationCallerID:(id)a6 failed:(char)a7 fromMe:(char)a8;

@end
