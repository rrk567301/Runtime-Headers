@class NSString, IKImageWrapper;

@interface IKFlockingDatasourceItem : NSObject {
    IKImageWrapper *_image;
    NSString *_title;
    NSString *_imageUID;
    unsigned long long _imageVersion;
}

- (void)dealloc;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (id)imageRepresentation;
- (id)imageUID;
- (id)imageRepresentationType;
- (id)imageTitle;
- (unsigned long long)imageVersion;
- (void)setImageVersion:(unsigned long long)a0;
- (void)setImageUID:(id)a0;

@end
