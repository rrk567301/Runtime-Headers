@class NSString;

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _preferredScale;
    double _scaleOverride;
    long long _rotation;
    BOOL _virtual;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } pixelSize;
@property (readonly, nonatomic) double pointScale;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } size;
@property (readonly, nonatomic) double refreshRate;
@property (readonly, nonatomic) long long colorGamut;
@property (readonly, nonatomic) long long hdrMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_emptyMode;

- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 preferredScale:(unsigned long long)a2 scaleOverride:(double)a3 refreshRate:(double)a4 gamut:(long long)a5 hdr:(long long)a6 rotation:(long long)a7 virtual:(BOOL)a8 validityCheck:(long long)a9;
- (double)scale;
- (struct CGSize { double x0; double x1; })nativePixelSize;
- (id)_copyWithOverrideSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_initWithCADisplayMode:(id)a0 scale:(double)a1 rotation:(long long)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_caColorGamut;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_copyWithOverrideSize:(struct CGSize { double x0; double x1; })a0;
- (id)_caHDRMode;
- (unsigned long long)_caPreferredScale;
- (long long)_rotation;
- (id)_copyWithOverrideSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 refreshRate:(double)a2;
- (unsigned long long)_caWidth;
- (BOOL)_isVirtualMode;
- (double)_caRefreshRate;
- (id)_referenceSizeDescription;
- (unsigned long long)_caHeight;
- (id)init;
- (id)_initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 scale:(unsigned long long)a2 refreshRate:(double)a3 gamut:(long long)a4 hdr:(long long)a5;

@end
