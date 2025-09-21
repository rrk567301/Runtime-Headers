@class NSString, LNStaticDeferredLocalizedString;

@interface LNActionDeprecationMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *messageText;
@property (readonly, copy, nonatomic) NSString *replacedByIntentIdentifier;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageText:(id)a0 replacedByIntentIdentifier:(id)a1;

@end
