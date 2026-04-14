@class NSArray;

@interface IMAPEnableCommand : IMAPSingleCommand

@property (readonly, copy, nonatomic) NSArray *capabilities;

- (id)activityString;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCapabilities:(id)a0;
- (id)commandTypeString;
- (BOOL)executeOnConnection:(id)a0;
- (BOOL)handlesAllUntaggedResponses;
- (long long)maxAllowedConnectionState;
- (long long)minRequiredConnectionState;
- (id)newCommandDataForLiteralPlus:(BOOL)a0;

@end
