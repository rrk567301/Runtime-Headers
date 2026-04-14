@class NSString;

@interface HKFeatureIdentifierAndContext : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *featureIdentifier;
@property (readonly, copy, nonatomic) NSString *context;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithFeatureIdentifier:(id)a0 context:(id)a1;

@end
