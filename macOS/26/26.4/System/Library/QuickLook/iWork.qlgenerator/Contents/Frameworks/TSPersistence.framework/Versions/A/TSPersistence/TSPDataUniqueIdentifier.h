@class NSString, TSPDigest;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *digestString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithDigest:(id)a0;

@end
