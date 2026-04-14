@interface FileLocalXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithBackend:(const void *)a0;
- (id)initWithFileDescriptor:(int)a0 writable:(BOOL)a1 locked:(BOOL)a2;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1;

@end
