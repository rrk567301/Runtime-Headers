@class NSString, NSNumber;

@interface IDSBlastDoorMessageContext : NSObject

@property (readonly, nonatomic) NSString *topic;
@property (readonly, nonatomic) BOOL isInvitationService;
@property (readonly, nonatomic) NSNumber *command;
@property (nonatomic) unsigned int payloadType;

- (id)dictionaryRepresentation;
- (id)description;
- (void).cxx_destruct;
- (id)initWithService:(id)a0 command:(id)a1;

@end
