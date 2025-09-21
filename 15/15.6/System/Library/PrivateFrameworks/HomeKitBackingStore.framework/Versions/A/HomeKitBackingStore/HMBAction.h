@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic) char shouldUpdateClients;

+ (id)shouldUpdateClientsAction;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
