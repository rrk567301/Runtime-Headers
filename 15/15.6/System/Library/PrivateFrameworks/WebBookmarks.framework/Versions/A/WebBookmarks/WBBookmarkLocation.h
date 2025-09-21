@class WBSCRDTPosition;

@interface WBBookmarkLocation : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) int parentID;
@property (readonly, copy, nonatomic) WBSCRDTPosition *position;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithParentID:(int)a0 position:(id)a1;
- (id)locationWithParentID:(int)a0;
- (id)locationWithPosition:(id)a0;

@end
