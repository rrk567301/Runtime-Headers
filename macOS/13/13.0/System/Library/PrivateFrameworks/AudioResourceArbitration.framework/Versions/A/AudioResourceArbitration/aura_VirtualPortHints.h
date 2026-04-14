@protocol AuRA_VirtualPort;

@interface AuRA_VirtualPortHints : NSObject <NSCopying>

@property (retain, nonatomic) id<AuRA_VirtualPort> virtualPort;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
