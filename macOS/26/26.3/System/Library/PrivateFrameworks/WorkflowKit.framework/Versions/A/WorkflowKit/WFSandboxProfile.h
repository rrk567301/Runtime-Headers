@class NSData;

@interface WFSandboxProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSData *data;
@property (copy, nonatomic) NSData *builtin;

- (id)initWithProfile:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)fill:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;

@end
