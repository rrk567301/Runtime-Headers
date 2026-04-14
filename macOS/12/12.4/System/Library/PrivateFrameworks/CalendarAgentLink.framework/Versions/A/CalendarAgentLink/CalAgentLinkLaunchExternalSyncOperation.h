@class NSArray;

@interface CalAgentLinkLaunchExternalSyncOperation : CalAgentLinkOneWayOperation

@property (retain, nonatomic) NSArray *launchArguments;
@property BOOL delay;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithLaunchArguments:(id)a0 shouldDelay:(BOOL)a1;
- (id)inputPayload;

@end
