@class SKStatusPayload, SKADatabaseReceivedInvitation;

@interface SKADecryptedStatusPayload : NSObject

@property (readonly, nonatomic) SKStatusPayload *statusPayload;
@property (readonly, nonatomic) SKADatabaseReceivedInvitation *invitation;

- (void).cxx_destruct;
- (id)description;
- (id)initWithStatusPayload:(id)a0 invitation:(id)a1;

@end
