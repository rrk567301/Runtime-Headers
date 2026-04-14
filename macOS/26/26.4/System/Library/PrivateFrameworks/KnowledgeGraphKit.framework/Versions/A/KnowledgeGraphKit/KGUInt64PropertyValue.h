@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (id)initWithValue:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)kgPropertyValue;

@end
