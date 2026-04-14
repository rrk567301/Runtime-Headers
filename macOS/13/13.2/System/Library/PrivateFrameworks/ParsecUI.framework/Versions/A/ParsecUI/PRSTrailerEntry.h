@class NSImage, NSString, SFPunchout;

@interface PRSTrailerEntry : NSObject

@property (retain, nonatomic) NSImage *image;
@property (retain, nonatomic) NSImage *image_overlay;
@property (retain, nonatomic) NSString *caption;
@property (retain, nonatomic) SFPunchout *trailer_punchout;

- (void).cxx_destruct;
- (id)initWithSFSearchResult:(id)a0 mediaItem:(id)a1;

@end
