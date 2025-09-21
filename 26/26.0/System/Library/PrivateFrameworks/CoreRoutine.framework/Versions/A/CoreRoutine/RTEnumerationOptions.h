@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id /* block */)processingBlock;

@end
