@interface VFXTextureAttachmentDescriptor : NSObject

@property (nonatomic) long long width;
@property (nonatomic) long long height;
@property (nonatomic) unsigned long long pixelFormat;
@property (nonatomic) long long arrayLength;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)metalDescriptor;

@end
