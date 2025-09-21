@class NSString, NSDictionary, NSDate;

@interface HDIDSMessagePersistentContext : NSObject <NSSecureCoding> {
    char _fromRequest;
    unsigned short _messageID;
    NSString *_idsIdentifier;
    NSString *_deviceIdentifier;
    NSDictionary *_userInfo;
    NSDate *_date;
}

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
