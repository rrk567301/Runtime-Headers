@protocol AuRA_VirtualPort;

@interface AuRA_TurnByTurnPortPreferences : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_VirtualPort> virtualPort;
@property (nonatomic) BOOL allowed;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
