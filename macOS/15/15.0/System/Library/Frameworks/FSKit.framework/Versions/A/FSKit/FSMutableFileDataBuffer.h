@interface FSMutableFileDataBuffer : FSFileDataBuffer

+ (BOOL)supportsSecureCoding;
+ (id)dataWithLength:(unsigned long long)a0;
+ (id)dataWithCapacity:(unsigned long long)a0;

- (Class)classForCoder;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCapacity:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (void *)mutableBytes;
- (unsigned long long)capacity;
- (void)withMutableBytes:(id /* block */)a0;

@end
