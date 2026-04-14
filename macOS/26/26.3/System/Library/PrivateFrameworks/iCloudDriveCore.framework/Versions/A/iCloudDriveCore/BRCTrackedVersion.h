@class NSString, BRFileObjectID;

@interface BRCTrackedVersion : NSObject <NSCopying>

@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) NSString *etagIfLoser;
@property (readonly, nonatomic) int kind;

+ (id)trackedVersionFor:(id)a0 withEtagIfLoser:(id)a1 kind:(int)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
