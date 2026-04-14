@class NSString, NSDate;

@interface AMSMediaToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *expirationDate;
@property (readonly) double lifetime;
@property (readonly, copy) NSString *tokenString;
@property (readonly, getter=isValid) BOOL valid;

- (BOOL)isExpired;
- (double)percentageOfLifetimeRemaining;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)invalidCopy;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2;
- (id)description;
- (BOOL)willExpireWithin:(double)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2 valid:(BOOL)a3;

@end
