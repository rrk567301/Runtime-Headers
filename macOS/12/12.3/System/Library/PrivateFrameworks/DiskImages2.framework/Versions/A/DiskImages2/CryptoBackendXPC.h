@class BackendXPC;

@interface CryptoBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isUnlocked;
- (void)replaceWithBackendXPC:(id)a0;
- (id)initWithFormat:(const void *)a0 baseBackendXPC:(id)a1;

@end
