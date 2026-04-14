@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) long long value;

- (unsigned long long)dataType;
- (id)kgPropertyValue;
- (unsigned long long)hash;
- (id)initWithValue:(long long)a0;
- (BOOL)isEqual:(id)a0;

@end
