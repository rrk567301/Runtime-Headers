@class NSDate;

@interface SWTransparencyExpiringVerificationResult : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long result;
@property (readonly) NSDate *expiry;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithResult:(unsigned long long)a0 expiry:(id)a1;

@end
