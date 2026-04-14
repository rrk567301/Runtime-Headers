@class NSNumber, NSData;

@interface CHIPMessagingClusterMessageConfirmationParams : NSObject

@property (retain, nonatomic) NSNumber *messageId;
@property (retain, nonatomic) NSNumber *confirmationTime;
@property (retain, nonatomic) NSNumber *messageConfirmationControl;
@property (retain, nonatomic) NSData *messageResponse;

- (id)init;
- (void).cxx_destruct;

@end
