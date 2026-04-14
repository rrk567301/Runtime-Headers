@class NSString;

@interface FFFeatureIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *domainName;
@property (readonly, nonatomic) NSString *featureName;

+ (id)identifierFromString:(id)a0;

- (id)initWithDomain:(id)a0 feature:(id)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
