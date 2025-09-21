@class NSString, NSImage;

@interface CNDefaultPhotoBrowserItem : NSObject

@property (retain) NSString *imagePath;
@property (retain) NSImage *image;

- (id)imageRepresentation;
- (void).cxx_destruct;
- (id)imageRepresentationType;
- (id)imageUID;
- (id)initWithImagePath:(id)a0;

@end
