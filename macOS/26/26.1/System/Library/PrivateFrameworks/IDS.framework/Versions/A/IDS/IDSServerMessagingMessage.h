@class NSString, NSDictionary, NSData, NSDate, NSNumber;

@interface IDSServerMessagingMessage : IDSMessage

@property (retain, nonatomic) NSData *messageData;
@property (retain, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSString *messageID;
@property (retain, nonatomic) NSNumber *userSpecifiedCommand;
@property (retain, nonatomic) NSDictionary *userDefinedTopLevelFields;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)messageBody;
- (long long)command;
- (BOOL)wantsResponse;

@end
