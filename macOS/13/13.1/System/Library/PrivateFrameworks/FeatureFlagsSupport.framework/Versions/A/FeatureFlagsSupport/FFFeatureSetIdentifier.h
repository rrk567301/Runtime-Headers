@class NSString;

@interface FFFeatureSetIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *featureGroupName;
@property (readonly, nonatomic) NSString *featureSetName;

+ (id)identifierFromString:(id)a0;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithGroup:(id)a0 set:(id)a1;

@end
