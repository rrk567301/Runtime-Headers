@class NSString;

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (unsigned long long)dataType;
- (id)initWithValue:(id)a0;
- (id)maPropertyValue;

@end
