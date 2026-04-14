@interface RamXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithSize:(unsigned long long)a0;
- (void)createRamBackend;

@end
