@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (id)initWithValue:(unsigned long long)a0;
- (unsigned long long)dataType;
- (id)kgPropertyValue;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
