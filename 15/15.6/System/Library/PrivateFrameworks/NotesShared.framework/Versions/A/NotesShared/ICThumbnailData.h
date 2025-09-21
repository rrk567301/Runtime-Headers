@class NSImage;

@interface ICThumbnailData : NSObject

@property (retain, nonatomic) NSImage *image;
@property (nonatomic) unsigned long long imageScaling;
@property (nonatomic) char showAsFileIcon;
@property (nonatomic) char isMovie;

- (void).cxx_destruct;
- (id)initWithImage:(id)a0 imageScaling:(unsigned long long)a1 showAsFileIcon:(char)a2 isMovie:(char)a3;

@end
