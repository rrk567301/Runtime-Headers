@interface VFXTextureAttachmentDescriptor : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) long long arrayLength;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)metalDescriptor;

@end
