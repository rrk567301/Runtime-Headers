@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying>

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)description;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (id)init;
- (id)locationWithParentID:(int)a0;
- (id)locationWithPosition:(id)a0;

@end
