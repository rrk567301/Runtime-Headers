@class NSString, TSPDigest;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *digestString;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithDigest:(id)a0;

@end
