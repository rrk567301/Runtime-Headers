@class NSString, NSDate;

@interface AMSMediaToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) NSDate *expirationDate;
@property (readonly) double lifetime;
@property (readonly, copy) NSString *tokenString;
@property (readonly, getter=isValid) char valid;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (char)isExpired;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2 valid:(char)a3;
- (id)invalidCopy;
- (double)percentageOfLifetimeRemaining;
- (char)willExpireWithin:(double)a0;

@end
