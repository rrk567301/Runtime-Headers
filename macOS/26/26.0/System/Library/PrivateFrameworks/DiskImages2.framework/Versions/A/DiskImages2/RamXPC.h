@interface RamXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(unsigned long long)a0;
- (void)createRamBackend;

@end
