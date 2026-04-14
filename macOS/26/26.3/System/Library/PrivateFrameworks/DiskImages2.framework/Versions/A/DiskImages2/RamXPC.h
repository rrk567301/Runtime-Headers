@interface RamXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (id)description;
- (id)initWithSize:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)createRamBackend;

@end
