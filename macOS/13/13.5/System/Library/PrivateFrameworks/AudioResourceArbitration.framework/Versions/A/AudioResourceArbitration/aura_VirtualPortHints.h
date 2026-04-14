@protocol AuRA_VirtualPort;

@interface AuRA_VirtualPortHints : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_VirtualPort> virtualPort;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
