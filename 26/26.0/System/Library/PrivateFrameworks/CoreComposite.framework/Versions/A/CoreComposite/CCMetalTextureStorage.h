@class NSString, NSData;

@interface CCMetalTextureStorage : NSObject <NSCopying, NSSecureCoding> {
    BOOL _hasIOSurface;
    unsigned long long _width;
    unsigned long long _height;
    unsigned long long _depth;
    unsigned long long _arrayLength;
    unsigned long long _mipMapLevel;
    unsigned long long _pixelFormat;
    unsigned long long _storageMode;
    unsigned long long _usage;
    unsigned long long _type;
    NSString *_label;
    NSData *_textureData;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
