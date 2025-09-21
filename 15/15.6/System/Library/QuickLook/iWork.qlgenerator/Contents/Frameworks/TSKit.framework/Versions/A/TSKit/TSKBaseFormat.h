@interface TSKBaseFormat : TSKFormat <NSCopying>

@property (readonly, nonatomic) unsigned char base;
@property (readonly, nonatomic) unsigned char basePlaces;
@property (readonly, nonatomic) char baseUseMinusSign;

+ (id)defaultHexadecimalFormat;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)stringFromDouble:(double)a0 locale:(id)a1;
- (id)initWithFormatType:(unsigned int)a0;
- (id)asBaseFormat;
- (id)initWithBase:(unsigned char)a0 basePlaces:(unsigned char)a1 baseUseMinusSign:(char)a2;

@end
