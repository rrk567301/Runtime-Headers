@class IFColor;

@interface IFSymbolImageDescriptor : NSObject <NSCopying>

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;
@property (nonatomic) long long layoutDirection;
@property (copy, nonatomic) IFColor *tintColor;

- (id)digest;
- (unsigned long long)weight;
- (void)setWeight:(unsigned long long)a0;
- (unsigned long long)size;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setSize:(unsigned long long)a0;
- (id)init;

@end
