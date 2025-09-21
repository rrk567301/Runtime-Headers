@class NSArray, AVTextStyleRule;

@interface AVCaptionRendererInternal : NSObject {
    NSArray *_captions;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _bounds;
    AVTextStyleRule *_defaultStyles;
    NSArray *_sortedCaptions;
    struct OpaqueFigCaptionClient { } *_captionClient;
}

@end
