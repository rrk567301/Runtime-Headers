@class NSString;

@interface DOMHTMLVideoElement : DOMHTMLMediaElement

@property unsigned int width;
@property unsigned int height;
@property (readonly) unsigned int videoWidth;
@property (readonly) unsigned int videoHeight;
@property (copy) NSString *poster;
@property char playsInline;
@property (readonly) char webkitSupportsFullscreen;
@property (readonly) char webkitDisplayingFullscreen;

- (void)webkitEnterFullScreen;
- (void)webkitEnterFullscreen;
- (void)webkitExitFullScreen;
- (void)webkitExitFullscreen;

@end
