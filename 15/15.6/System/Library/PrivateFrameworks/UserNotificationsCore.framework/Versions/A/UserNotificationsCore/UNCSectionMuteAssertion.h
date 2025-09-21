@class NSDate;

@interface UNCSectionMuteAssertion : UNCMuteAssertion

@property (readonly, nonatomic) NSDate *expirationDate;

+ (char)supportsSecureCoding;
+ (id)sectionMuteAssertionUntilDate:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithExpirationDate:(id)a0;
- (void)getNextExpirationDate:(id *)a0 wasPurged:(char *)a1;
- (char)isActiveForThreadIdentifier:(id)a0;

@end
