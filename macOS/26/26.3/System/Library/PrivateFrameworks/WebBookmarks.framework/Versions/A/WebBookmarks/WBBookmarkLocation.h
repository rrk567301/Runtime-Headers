@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying>

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (id)locationWithParentID:(int)a0;
- (id)locationWithPosition:(id)a0;
- (id)description;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
