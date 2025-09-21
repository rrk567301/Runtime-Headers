@interface STRPSampleByteEncodable : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct MyCoolStruct { char aBool; unsigned int smolInt; unsigned char someOptions; unsigned long long anInt; } aStruct;

- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithStruct:(struct MyCoolStruct { char x0; unsigned int x1; unsigned char x2; unsigned long long x3; })a0;

@end
