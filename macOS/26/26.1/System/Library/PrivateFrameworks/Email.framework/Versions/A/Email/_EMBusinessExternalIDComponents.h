@class NSString;

@interface _EMBusinessExternalIDComponents : NSObject <NSCopying>

@property (copy, nonatomic) NSString *highLevelDomain;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *simpleAddress;
@property (copy, nonatomic) NSString *brandID;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
