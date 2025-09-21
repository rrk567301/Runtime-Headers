@interface FileLocalXPC : BackendXPC

+ (char)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 fileOpenFlags:(int)a1;

@end
