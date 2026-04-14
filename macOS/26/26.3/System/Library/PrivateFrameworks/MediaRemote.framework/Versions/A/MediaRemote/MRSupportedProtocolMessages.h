@interface MRSupportedProtocolMessages : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long lastSupportedMessageType;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAllSupportedMessages;
- (id)initWithLastSupportedMessageType:(unsigned long long)a0;
- (BOOL)isSupported:(unsigned long long)a0;

@end
