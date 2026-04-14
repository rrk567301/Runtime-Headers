@interface KTVerifierResultQueryPerformance : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property double networkQueryTimeInterval;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
