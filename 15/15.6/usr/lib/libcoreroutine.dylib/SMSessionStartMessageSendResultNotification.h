@class NSString, NSError, SMSessionStartMessage;

@interface SMSessionStartMessageSendResultNotification : RTNotification

@property (readonly, nonatomic) SMSessionStartMessage *message;
@property (readonly, nonatomic) NSString *messageGUID;
@property (readonly, nonatomic) char success;
@property (readonly, nonatomic) NSError *error;

- (id)init;
- (void).cxx_destruct;
- (id)initWithSessionStartMessage:(id)a0 messageGUID:(id)a1 success:(char)a2 error:(id)a3;

@end
