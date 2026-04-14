@interface FileLocalXPC : BackendXPC

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithBackend:(const void *)a0;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1;

@end
