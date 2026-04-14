@class NSString, NSImage;

@interface CNDefaultPhotoBrowserItem : NSObject

@property (retain) NSString *imagePath;
@property (retain) NSImage *image;

- (void).cxx_destruct;
- (id)imageRepresentation;
- (id)initWithImagePath:(id)a0;
- (id)imageUID;
- (id)imageRepresentationType;

@end
