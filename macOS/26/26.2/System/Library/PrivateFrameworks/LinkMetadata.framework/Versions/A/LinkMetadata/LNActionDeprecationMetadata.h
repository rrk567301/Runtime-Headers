@class NSString, LNStaticDeferredLocalizedString;

@interface LNActionDeprecationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *messageText;
@property (readonly, copy, nonatomic) NSString *replacedByIntentIdentifier;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithMessageText:(id)a0 replacedByIntentIdentifier:(id)a1;

@end
