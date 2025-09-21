@class NSData, NSDate;

@interface ICDelegateToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isExpired) char expired;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithType:(long long)a0 data:(id)a1;
- (char)expiresBeforeDate:(id)a0;
- (id)initWithType:(long long)a0 data:(id)a1 expirationDate:(id)a2;

@end
