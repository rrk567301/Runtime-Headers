@interface AXPiOSElementData : NSObject <NSCopying>

@property (nonatomic) struct { unsigned long long elementOrHash; unsigned long long elementID; } uid;
@property (nonatomic) int pid;

- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
