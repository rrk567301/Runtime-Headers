@class NSString;

@interface _EMBusinessExternalIDComponents : NSObject <NSCopying>

@property (copy, nonatomic) NSString *highLevelDomain;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *simpleAddress;
@property (copy, nonatomic) NSString *brandID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;

@end
