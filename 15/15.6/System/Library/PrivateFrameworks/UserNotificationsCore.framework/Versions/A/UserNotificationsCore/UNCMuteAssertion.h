@interface UNCMuteAssertion : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_init;
- (void)getNextExpirationDate:(id *)a0 wasPurged:(char *)a1;
- (char)isActiveForThreadIdentifier:(id)a0;

@end
