@interface HMDH264Level : HAPNumberParser <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long h264Level;

+ (id)arrayWithLevels:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)description:(id)a0 indent:(id)a1;
- (id)initWithTLVData:(id)a0;
- (id)initWithH264Level:(unsigned long long)a0;

@end
