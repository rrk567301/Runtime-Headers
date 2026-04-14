@interface KGDoublePropertyValue : KGPropertyValue

@property (readonly, nonatomic) double value;

- (id)initWithValue:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)kgPropertyValue;

@end
