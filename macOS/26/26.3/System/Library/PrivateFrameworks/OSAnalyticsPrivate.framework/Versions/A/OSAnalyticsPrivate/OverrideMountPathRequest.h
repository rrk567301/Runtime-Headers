@class NSArray;

@interface OverrideMountPathRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSArray *sandboxExtensions;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSandboxExtensions:(id)a0;

@end
