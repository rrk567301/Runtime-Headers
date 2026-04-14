@class NSString;

@interface GTCaptureArchiveHeapRestoreTextureSliceOverride : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *filename;
@property unsigned long long fileSize;
@property unsigned long long width;
@property unsigned long long height;
@property unsigned long long bytesPerRow;
@property unsigned long long bytesPerImage;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFilename:(id)a0 fileSize:(unsigned long long)a1 width:(unsigned long long)a2 height:(unsigned long long)a3 bytesPerRow:(unsigned long long)a4 bytesPerImage:(unsigned long long)a5;

@end
