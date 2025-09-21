@class NSArray;

@interface IMAPEnableCommand : IMAPSingleCommand

@property (readonly, copy, nonatomic) NSArray *capabilities;

- (id)init;
- (id)activityString;
- (void).cxx_destruct;
- (id)initWithCapabilities:(id)a0;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
