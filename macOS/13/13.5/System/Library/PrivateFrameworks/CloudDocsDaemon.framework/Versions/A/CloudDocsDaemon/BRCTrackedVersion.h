@class NSString, BRFileObjectID;

@interface BRCTrackedVersion : NSObject <NSCopying>

@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) NSString *etagIfLoser;

+ (id)trackedVersionFor:(id)a0 withEtagIfLoser:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
