@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) long long value;

- (id)initWithValue:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)kgPropertyValue;

@end
