@interface KGInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) long long value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)dataType;
- (id)initWithValue:(long long)a0;
- (id)maPropertyValue;

@end
