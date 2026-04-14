@class BackendXPC;

@interface ReadSynchronizerBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBackend:(id)a0;

@end
