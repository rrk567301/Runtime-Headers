@class NSString;

@interface MEMessageSenderMetadata : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSString *senderEmailAddress;
@property (readonly) char isVIP;
@property (readonly) char isContact;
@property (readonly) char isUnsubscribeHeaderPresent;
@property (readonly) char isPrimarySender;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSenderEmailAddress:(id)a0 isVIP:(char)a1 isContact:(char)a2 isUnsubscribeHeaderPresent:(char)a3 isPrimarySender:(char)a4;

@end
