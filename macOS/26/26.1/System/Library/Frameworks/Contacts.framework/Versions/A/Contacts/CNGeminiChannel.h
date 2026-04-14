@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *channelIdentifier;
@property (readonly) NSString *localizedLabel;
@property (readonly) NSString *localizedBadgeLabel;
@property (readonly) NSString *handle;
@property (readonly) TUSenderIdentity *senderIdentity;
@property (readonly, getter=isAvailable) BOOL available;

+ (id)os_log;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
