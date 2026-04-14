@interface RTEnumerationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned long long)batchSize;
- (id)description;
- (id)initWithCoder:(id)a0;
- (Class)enumeratedType;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id /* block */)processingBlock;
- (void)encodeWithCoder:(id)a0;

@end
