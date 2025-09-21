@interface CTLazuliMessagingCapabilities : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) long long notificationDisplay;
@property (nonatomic) char supportsComposingIndicator;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithReflection:(const struct MessagingCapabilities { int x0; BOOL x1; } *)a0;
- (char)isEqualToCTLazuliMessagingCapabilities:(id)a0;

@end
