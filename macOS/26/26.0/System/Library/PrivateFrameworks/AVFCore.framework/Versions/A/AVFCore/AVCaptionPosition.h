@class AVCaptionPositionInternal;

@interface AVCaptionPosition : NSObject <NSCopying, NSSecureCoding> {
    AVCaptionPositionInternal *_internal;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long cellX;
@property (readonly, nonatomic) long long cellY;
@property (readonly, nonatomic) float relativeToEnclosingRegionX;
@property (readonly, nonatomic) float relativeToEnclosingRegionY;
@property (readonly, nonatomic) long long unitType;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithCellPositionX:(long long)a0 andY:(long long)a1;
- (id)initWithCellPositionX:(long long)a0 y:(long long)a1;
- (id)initWithPositionRelativeToEnclosingRegionX:(float)a0 relativeToEnclosingRegionY:(float)a1;
- (id)initWithRelativeToEnclosingRegionX:(float)a0 andY:(float)a1;

@end
