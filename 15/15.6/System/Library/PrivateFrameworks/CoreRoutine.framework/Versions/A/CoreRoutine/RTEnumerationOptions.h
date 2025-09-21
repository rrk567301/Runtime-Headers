@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (id /* block */)processingBlock;
- (Class)enumeratedType;

@end
