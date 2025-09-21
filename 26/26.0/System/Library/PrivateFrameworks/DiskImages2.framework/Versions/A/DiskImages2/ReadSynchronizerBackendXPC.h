@class BackendXPC;

@interface ReadSynchronizerBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackend:(id)a0;

@end
