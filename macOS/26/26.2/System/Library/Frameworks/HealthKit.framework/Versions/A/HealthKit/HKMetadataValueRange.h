@interface HKMetadataValueRange : NSObject <NSCopying>

@property (readonly, copy, nonatomic) id minValue;
@property (readonly, copy, nonatomic) id maxValue;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithMinValue:(id)a0 maxValue:(id)a1;

@end
