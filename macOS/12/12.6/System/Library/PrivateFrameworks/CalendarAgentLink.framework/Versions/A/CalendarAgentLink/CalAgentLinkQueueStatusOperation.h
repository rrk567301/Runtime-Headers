@interface CalAgentLinkQueueStatusOperation : CalAgentLinkOperation

@property (nonatomic) BOOL runningQueueFound;

- (id)description;
- (id)init;
- (void)responsePayloadReceived:(id)a0;

@end
