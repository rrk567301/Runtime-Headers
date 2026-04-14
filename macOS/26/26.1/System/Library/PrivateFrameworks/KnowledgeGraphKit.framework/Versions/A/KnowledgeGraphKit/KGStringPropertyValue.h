@class NSString;

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value;

- (unsigned long long)dataType;
- (id)kgPropertyValue;
- (unsigned long long)hash;
- (id)initWithValue:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
