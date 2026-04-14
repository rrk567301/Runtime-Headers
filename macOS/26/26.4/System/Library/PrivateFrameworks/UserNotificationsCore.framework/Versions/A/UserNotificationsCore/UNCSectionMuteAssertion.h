@class NSDate;

@interface UNCSectionMuteAssertion : UNCMuteAssertion

@property (readonly, nonatomic) NSDate *expirationDate;

+ (BOOL)supportsSecureCoding;
+ (id)sectionMuteAssertionUntilDate:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)_initWithExpirationDate:(id)a0;
- (void)getNextExpirationDate:(id *)a0 wasPurged:(BOOL *)a1;
- (BOOL)isActiveForThreadIdentifier:(id)a0;

@end
