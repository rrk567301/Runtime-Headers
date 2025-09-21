@class NSString, NSDictionary, NSDate;

@interface SCDAAssertionContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long timestamp;
@property (readonly, copy, nonatomic) NSString *reason;
@property (readonly, copy, nonatomic) NSDate *effectiveDate;
@property (readonly, nonatomic) double expirationDuration;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_descriptionWithIndent:(unsigned long long)a0;
- (id)initWithBuilder:(id /* block */)a0;
- (id)initWithTimestamp:(unsigned long long)a0 reason:(id)a1 effectiveDate:(id)a2 expirationDuration:(double)a3 userInfo:(id)a4;
- (id)mutatedCopyWithMutator:(id /* block */)a0;

@end
