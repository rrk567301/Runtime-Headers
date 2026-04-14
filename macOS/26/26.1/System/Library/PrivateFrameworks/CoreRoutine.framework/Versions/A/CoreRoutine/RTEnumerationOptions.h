@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id /* block */)processingBlock;
- (unsigned long long)batchSize;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;

@end
