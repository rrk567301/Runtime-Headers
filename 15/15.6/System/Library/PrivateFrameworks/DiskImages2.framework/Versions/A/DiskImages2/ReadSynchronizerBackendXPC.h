@class BackendXPC;

@interface ReadSynchronizerBackendXPC : BackendXPC

@property (readonly, nonatomic) BackendXPC *baseBackendXPC;

+ (char)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBackend:(id)a0;

@end
