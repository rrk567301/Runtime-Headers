@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface AVPlayerLayerSubtitlePreviewHelper : NSObject {
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_subtitlePreviewText;
    NSString *_subtitlePreviewProfile;
    NSString *_extendedLanguageTag;
    struct OpaqueFigSubtitleRenderer { } *_subtitlePreviewRenderer;
    NSString *_lastPreviewText;
    NSString *_lastPreviewProfile;
    NSString *_lastExtendedLanguageTag;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _lastBounds;
    struct CGImage { } *_lastGeneratedImage;
}

@property (copy, nonatomic) NSString *subtitlePreviewText;
@property (copy, nonatomic) NSString *subtitlePreviewProfile;
@property (copy, nonatomic) NSString *extendedLanguageTag;

- (void)clear;
- (id)init;
- (void)dealloc;
- (struct CGImage { } *)_createSubtitlePreviewImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 text:(id)a1 languageTag:(id)a2;
- (void)clearWithSerialQueue;
- (struct CGImage { } *)maybeCreateSubtitlePreviewImageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
