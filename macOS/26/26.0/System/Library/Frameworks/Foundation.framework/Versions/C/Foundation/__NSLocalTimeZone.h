@interface __NSLocalTimeZone : NSTimeZone

+ (BOOL)supportsSecureCoding;

- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
