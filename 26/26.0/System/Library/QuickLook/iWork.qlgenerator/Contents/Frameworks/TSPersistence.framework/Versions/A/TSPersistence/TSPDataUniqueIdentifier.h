@class NSString, TSPDigest;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *digestString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithDigest:(id)a0;

@end
