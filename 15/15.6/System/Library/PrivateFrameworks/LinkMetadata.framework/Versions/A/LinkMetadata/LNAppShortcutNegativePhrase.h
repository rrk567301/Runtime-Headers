@class LNStaticDeferredLocalizedString;

@interface LNAppShortcutNegativePhrase : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *phrase;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPhrase:(id)a0;

@end
