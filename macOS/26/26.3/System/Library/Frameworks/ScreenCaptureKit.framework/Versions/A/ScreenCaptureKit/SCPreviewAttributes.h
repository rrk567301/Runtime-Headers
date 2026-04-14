@class NSString;

@interface SCPreviewAttributes : NSObject

@property (copy, nonatomic) NSString *streamID;
@property (nonatomic) long long previewContent;
@property (nonatomic) struct CGSize { double width; double height; } frameSize;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (nonatomic) float scaleFactor;
@property (nonatomic) float pixelScale;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
