@interface KGUInt64PropertyValue : KGPropertyValue

@property (readonly, nonatomic) unsigned long long value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned long long)dataType;
- (id)initWithValue:(unsigned long long)a0;
- (id)maPropertyValue;

@end
