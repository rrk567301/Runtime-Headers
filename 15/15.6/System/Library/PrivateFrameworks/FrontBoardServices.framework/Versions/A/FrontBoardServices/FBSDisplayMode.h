@class NSString;

@interface FBSDisplayMode : NSObject <BSXPCCoding, NSCopying, NSSecureCoding> {
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _preferredScale;
    double _scaleOverride;
    long long _rotation;
    char _virtual;
}

@property (class, readonly) char supportsSecureCoding;

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

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)scale;
- (void)encodeWithXPCDictionary:(id)a0;
- (id)initWithXPCDictionary:(id)a0;
- (struct CGSize { double x0; double x1; })nativePixelSize;
- (id)_caColorGamut;
- (id)_caHDRMode;
- (unsigned long long)_caHeight;
- (unsigned long long)_caPreferredScale;
- (double)_caRefreshRate;
- (unsigned long long)_caWidth;
- (id)_copyWithOverrideSize:(struct CGSize { double x0; double x1; })a0;
- (id)_copyWithOverrideSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)_copyWithOverrideSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 refreshRate:(double)a2;
- (id)_initWithCADisplayMode:(id)a0 scale:(double)a1 rotation:(long long)a2;
- (id)_initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 preferredScale:(unsigned long long)a2 scaleOverride:(double)a3 refreshRate:(double)a4 gamut:(long long)a5 hdr:(long long)a6 rotation:(long long)a7 virtual:(char)a8 validityCheck:(long long)a9;
- (id)_initWithWidth:(unsigned long long)a0 height:(unsigned long long)a1 scale:(unsigned long long)a2 refreshRate:(double)a3 gamut:(long long)a4 hdr:(long long)a5;
- (char)_isVirtualMode;
- (id)_referenceSizeDescription;
- (long long)_rotation;

@end
