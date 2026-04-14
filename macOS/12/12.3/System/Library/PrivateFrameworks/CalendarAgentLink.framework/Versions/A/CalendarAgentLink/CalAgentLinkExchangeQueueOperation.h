@class NSString;

@interface CalAgentLinkExchangeQueueOperation : CalAgentLinkOneWayOperation

@property (retain, nonatomic) NSString *queueAction;
@property (retain, nonatomic) NSString *persistentOperationManagedObjectID;
@property (retain, nonatomic) NSString *principalManagedObjectID;

- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)inputPayload;
- (id)initWithAction:(id)a0 principalManagedObjectID:(id)a1 persistentOperationManagedObjectID:(id)a2;

@end
