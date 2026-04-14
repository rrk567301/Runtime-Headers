@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (id /* block */)processingBlock;
- (id)initWithCoder:(id)a0;
- (unsigned long long)batchSize;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (Class)enumeratedType;
- (id)description;

@end
