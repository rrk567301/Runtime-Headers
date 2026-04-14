@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (unsigned long long)dataType;
- (id)kgPropertyValue;
- (unsigned long long)hash;
- (id)initWithValue:(double)a0;
- (BOOL)isEqual:(id)a0;

@end
