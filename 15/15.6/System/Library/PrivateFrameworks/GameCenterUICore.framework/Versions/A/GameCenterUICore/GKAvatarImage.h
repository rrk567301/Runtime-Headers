@class NSData, NSImage;

@interface GKAvatarImage : NSObject

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) NSImage *image;

- (void).cxx_destruct;
- (id)initWithPNGData:(id)a0 useUIImage:(char)a1;
- (void)prepareForUsingUIImage:(char)a0;

@end
