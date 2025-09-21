@interface UMPersonaMachPort : NSMachPort <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)replacementObjectForCoder:(id)a0;

@end
