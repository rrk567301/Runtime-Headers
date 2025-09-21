@class NSString, NSDate;

@interface HKNotificationInstruction : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) long long action;
@property (readonly, copy, nonatomic) NSString *categoryIdentifier;
@property (readonly, copy, nonatomic) NSDate *expirationDate;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAction:(long long)a0 categoryIdentifier:(id)a1 expirationDate:(id)a2;

@end
