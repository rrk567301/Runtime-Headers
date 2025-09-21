@class INInteraction;

@interface INUIExtensionRequestInfo : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) INInteraction *interaction;
@property (nonatomic) char requiresUserConsent;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithInteraction:(id)a0;

@end
