@interface SAURLSize : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property unsigned long long size;
@property char mayBePartOfCloneChain;

+ (id)newWithSize:(unsigned long long)a0;
+ (id)newWithSize:(unsigned long long)a0 mayBePartOfCloneChain:(char)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSize:(unsigned long long)a0 mayBePartOfCloneChain:(char)a1;

@end
