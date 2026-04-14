@interface NSMediaLibraryBrowserController : NSObject

@property (class, readonly) NSMediaLibraryBrowserController *sharedMediaLibraryBrowserController;

@property (readonly) id browserProxy;
@property (getter=isVisible) BOOL visible;
@property struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property unsigned long long mediaLibraries;

+ (unsigned long long)maskForMediaTypeEnum:(unsigned long long)a0;
+ (unsigned long long)mediaTypeEnumForMask:(unsigned long long)a0;

- (void)dealloc;
- (id)init;
- (id)frameAutosaveName;
- (void)orderFront:(id)a0;
- (void)orderOut:(id)a0;
- (void)setFrameAutosaveName:(id)a0;
- (void)togglePanel:(id)a0;

@end
