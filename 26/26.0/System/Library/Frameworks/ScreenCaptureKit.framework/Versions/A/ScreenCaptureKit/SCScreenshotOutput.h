@class NSURL;

@interface SCScreenshotOutput : NSObject

@property (retain, nonatomic) struct CGImage { } *sdrImage;
@property (retain, nonatomic) struct CGImage { } *hdrImage;
@property (nonatomic) NSURL *fileURL;

- (void)dealloc;

@end
