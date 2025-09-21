@class BRFieldCKInfo;

@interface BRCServerZoneHealthState : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) BRFieldCKInfo *ckInfo;
@property (readonly, nonatomic) int state;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithCKInfo:(id)a0 state:(int)a1;
- (id)initWithServerZoneHealthState:(id)a0;

@end
