@interface _PHPickerAspectRatio : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly, nonatomic) _PHPickerAspectRatio *deviceAspectRatio;
@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) double _aspectRatio;

+ (id)aspectRatio:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithAspectRatio:(double)a0;

@end
