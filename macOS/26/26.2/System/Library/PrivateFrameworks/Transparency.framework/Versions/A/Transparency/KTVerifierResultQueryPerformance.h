@interface KTVerifierResultQueryPerformance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double networkQueryTimeInterval;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
