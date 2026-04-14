@class NSString;

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value;

- (unsigned long long)dataType;
- (id)initWithValue:(id)a0;
- (id)kgPropertyValue;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
