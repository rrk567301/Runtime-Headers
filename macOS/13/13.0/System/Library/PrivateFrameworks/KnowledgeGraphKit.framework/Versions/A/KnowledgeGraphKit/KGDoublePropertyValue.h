@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)dataType;
- (id)initWithValue:(double)a0;
- (id)maPropertyValue;

@end
