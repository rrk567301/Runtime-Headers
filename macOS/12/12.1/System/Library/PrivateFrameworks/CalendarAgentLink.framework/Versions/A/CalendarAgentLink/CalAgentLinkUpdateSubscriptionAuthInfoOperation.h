@class NSString;

@interface CalAgentLinkUpdateSubscriptionAuthInfoOperation : CalAgentLinkOneWayOperation

@property (readonly, retain, nonatomic) NSString *nodeObjectID;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSString *password;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)inputPayload;
- (id)initWithNodeObjectID:(id)a0;

@end
