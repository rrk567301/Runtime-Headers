@class NSString, NSDate;

@interface AMSMediaToken : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSDate *expirationDate;
@property (readonly) double lifetime;
@property (readonly, copy) NSString *tokenString;
@property (readonly, getter=isValid) BOOL valid;

- (BOOL)isExpired;
- (id)invalidCopy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2 valid:(BOOL)a3;
- (id)description;
- (double)percentageOfLifetimeRemaining;
- (id)initWithCoder:(id)a0;
- (BOOL)willExpireWithin:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithString:(id)a0 expirationDate:(id)a1 lifetime:(double)a2;
- (void).cxx_destruct;

@end
