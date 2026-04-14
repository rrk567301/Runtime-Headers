@class NSString, NSArray;

@interface CalAgentLinkUserNotificationOperation : CalAgentLinkOneWayOperation

@property (retain, nonatomic) NSString *action;
@property (retain, nonatomic) NSArray *objectIDs;
@property (nonatomic) BOOL updatedPreferenceValue;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)initWithAction:(id)a0;
- (id)inputPayload;

@end
