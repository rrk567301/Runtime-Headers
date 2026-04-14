@class NSArray;

@interface NEIKEv2ConfigurationMessage : NSObject <NSCopying>

@property unsigned long long configurationType;
@property (retain) NSArray *attributes;

+ (id)copyConfigurationForRequest:(id)a0 reply:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithWithAttributes:(id)a0;

@end
