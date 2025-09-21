@protocol QLPreviewItem;

@interface SearchUIPreviewContainer : NSView <QLPreviewCustomView>

@property struct CGSize { double width; double height; } preferredQuickLookContentSize;
@property (retain) id<QLPreviewItem> previewItem;
@property (readonly) char isLoaded;

- (char)prefersKeepAspectRatio;

@end
