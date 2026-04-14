@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)locationWithPosition:(id)a0;
- (id)init;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (id)locationWithParentID:(int)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
