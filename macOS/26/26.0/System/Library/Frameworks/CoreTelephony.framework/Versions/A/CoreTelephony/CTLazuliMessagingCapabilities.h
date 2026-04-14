@interface CTLazuliMessagingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long notificationDisplay;
@property (nonatomic) BOOL supportsComposingIndicator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithReflection:(const struct MessagingCapabilities { int x0; BOOL x1; } *)a0;
- (BOOL)isEqualToCTLazuliMessagingCapabilities:(id)a0;

@end
