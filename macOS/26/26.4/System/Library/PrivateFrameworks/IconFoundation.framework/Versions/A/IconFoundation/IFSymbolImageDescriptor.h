@class IFColor;

@interface IFSymbolImageDescriptor : NSObject <NSCopying>

@property (nonatomic) double pointSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long symbolSize;
@property (nonatomic) long long symbolWeight;
@property (nonatomic) long long layoutDirection;
@property (copy, nonatomic) IFColor *tintColor;

- (unsigned long long)weight;
- (void)setWeight:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)digest;
- (void)setSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)size;

@end
