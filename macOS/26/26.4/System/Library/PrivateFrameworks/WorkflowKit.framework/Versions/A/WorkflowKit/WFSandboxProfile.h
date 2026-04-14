@interface WFSandboxProfile : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct { char *x0; char *x1; unsigned long long x2; } *profile;

- (id)initWithProfile:(struct { char *x0; char *x1; unsigned long long x2; } *)a0;
- (id)debugDescription;
- (BOOL)apply;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
