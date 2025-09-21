@interface LSSliceInfo : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int subtype;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSliceDescData:(struct LSSliceData { int x0; int x1; })a0;
- (id)initWithType:(int)a0 subtype:(int)a1;
- (struct LSSliceData { int x0; int x1; })sliceValue;

@end
