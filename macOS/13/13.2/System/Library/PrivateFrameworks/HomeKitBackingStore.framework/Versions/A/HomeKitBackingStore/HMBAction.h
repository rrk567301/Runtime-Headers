@interface HMBAction : HMFObject <NSCopying, NSMutableCopying>

@property (nonatomic) BOOL shouldUpdateClients;

+ (id)shouldUpdateClientsAction;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;

@end
