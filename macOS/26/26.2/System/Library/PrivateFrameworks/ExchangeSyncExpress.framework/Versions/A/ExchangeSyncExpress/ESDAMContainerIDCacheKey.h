@class NSString;

@interface ESDAMContainerIDCacheKey : NSObject <NSCopying>

@property (readonly, nonatomic) NSString *accountID;
@property (readonly, nonatomic) long long dataclass;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAccountID:(id)a0 andDataclass:(long long)a1;

@end
