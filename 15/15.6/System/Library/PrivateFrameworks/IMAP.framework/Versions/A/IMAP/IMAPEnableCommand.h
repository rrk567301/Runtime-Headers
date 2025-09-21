@class NSArray;

@interface IMAPEnableCommand : IMAPSingleCommand

@property (readonly, copy, nonatomic) NSArray *capabilities;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0;
- (id)activityString;
- (id)commandTypeString;
- (char)executeOnConnection:(id)a0;
- (char)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(char)a0;

@end
