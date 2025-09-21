@class NSData, EMMessageObjectID, NSString;

@interface EMOutgoingMessage : NSObject <EMOutgoingMessageBuilder, NSSecureCoding, EFPubliclyDescribable>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSData *messageData;
@property (nonatomic) long long action;
@property (nonatomic) char shouldSign;
@property (nonatomic) char shouldEncrypt;
@property (nonatomic) long long conversationNotificationLevel;
@property (retain, nonatomic) EMMessageObjectID *originalMessageID;
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (readonly, copy, nonatomic) NSString *ef_shortPublicDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithMessageData:(id)a0;

@end
