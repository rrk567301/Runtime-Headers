@class NSData, NSString, NSDate;

@interface APSIncomingMessage : APSMessage

@property (nonatomic) long long incomingInterface;
@property (copy, nonatomic) NSDate *timestamp;
@property (retain, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSData *token;
@property (copy, nonatomic) NSData *perAppToken;
@property (nonatomic, getter=wasFromStorage) char fromStorage;
@property (nonatomic, getter=wasLastMessageFromStorage) char lastMessageFromStorage;
@property (nonatomic) long long priority;
@property (nonatomic, getter=isTracingEnabled) char tracingEnabled;
@property (copy, nonatomic) NSData *tracingUUID;
@property (nonatomic) unsigned long long pushType;
@property (nonatomic) unsigned int pushFlags;
@property (retain, nonatomic) NSString *channelID;

@end
