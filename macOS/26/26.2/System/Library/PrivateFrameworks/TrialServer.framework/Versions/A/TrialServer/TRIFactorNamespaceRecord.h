@class NSString;

@interface TRIFactorNamespaceRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) NSString *namespaceName;

+ (id)factorRecordWithFactorName:(id)a0 namespaceName:(id)a1;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)initWithFactorName:(id)a0 namespaceName:(id)a1;
- (BOOL)isEqualToFactorRecord:(id)a0;

@end
