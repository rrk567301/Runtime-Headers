@class NSArray, NSString;

@interface CMIOExtensionStreamFormat : NSObject <NSCopying, NSSecureCoding> {
    NSString *_description;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) struct opaqueCMFormatDescription { } *formatDescription;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } minFrameDuration;
@property (readonly) struct { long long value; int timescale; unsigned int flags; long long epoch; } maxFrameDuration;
@property (readonly) NSArray *validFrameDurations;

+ (id)copyFormatsFromXPCArray:(id)a0;
+ (id)copyXPCArrayFromFormats:(id)a0;
+ (id)streamFormatWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 maxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 minFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 validFrameDurations:(id)a3;

- (id)initWithXPCDictionary:(id)a0;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyXPCDictionary;
- (id)initWithFormatDescription:(struct opaqueCMFormatDescription { } *)a0 maxFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 minFrameDuration:(struct { long long x0; int x1; unsigned int x2; long long x3; })a2 validFrameDurations:(id)a3;

@end
