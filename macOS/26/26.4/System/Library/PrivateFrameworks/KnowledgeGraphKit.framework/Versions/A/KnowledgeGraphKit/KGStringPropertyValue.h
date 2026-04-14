@class NSString;

@interface KGStringPropertyValue : KGPropertyValue

@property (readonly, nonatomic) NSString *value;

- (id)initWithValue:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)dataType;
- (unsigned long long)hash;
- (id)kgPropertyValue;

@end
