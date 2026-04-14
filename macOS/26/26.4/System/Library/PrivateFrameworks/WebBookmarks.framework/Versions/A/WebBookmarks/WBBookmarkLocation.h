@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying>

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (id)locationWithParentID:(int)a0;
- (void).cxx_destruct;
- (id)locationWithPosition:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;

@end
