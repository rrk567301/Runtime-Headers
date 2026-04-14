@interface PVMultiBlendLayerParams : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) int hgBlendMode;
@property (nonatomic) float opacity;
@property (nonatomic) int mode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_sharedInitWithOpacity:(float)a0 mode:(int)a1;
- (id)initWithOpacity:(float)a0 mode:(int)a1;
- (id)blendModeName;

@end
