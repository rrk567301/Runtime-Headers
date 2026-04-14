@class NSString;

@interface TRIFactorNamespaceRecord : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *factorName;
@property (readonly, nonatomic) NSString *namespaceName;

+ (id)factorRecordWithFactorName:(id)a0 namespaceName:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)copyWithReplacementFactorName:(id)a0;
- (id)description;
- (id)copyWithReplacementNamespaceName:(id)a0;
- (id)initWithFactorName:(id)a0 namespaceName:(id)a1;
- (BOOL)isEqualToFactorRecord:(id)a0;

@end
