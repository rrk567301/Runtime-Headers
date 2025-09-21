@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lastSupportedMessageType;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAllSupportedMessages;
- (id)initWithLastSupportedMessageType:(unsigned long long)a0;
- (char)isSupported:(unsigned long long)a0;

@end
