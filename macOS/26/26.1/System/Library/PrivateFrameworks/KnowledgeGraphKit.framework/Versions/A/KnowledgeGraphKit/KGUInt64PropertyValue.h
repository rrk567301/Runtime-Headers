@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (unsigned long long)dataType;
- (id)kgPropertyValue;
- (unsigned long long)hash;
- (id)initWithValue:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;

@end
