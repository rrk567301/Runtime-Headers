@class NSString, NSPanel, IKSlideshowDebugItem;

@interface IKSlideshowDebugger : NSObject <NSWindowDelegate> {
    NSPanel *_debugWindow;
    id *_items;
    IKSlideshowDebugItem *_statusItem;
    unsigned long long _itemCount;
    unsigned long long _currentIndex;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)windowDidChangeScreen:(id)a0;
- (void)cleanup;
- (unsigned long long)currentIndex;
- (void)finalize;
- (void)setItemCount:(unsigned long long)a0;
- (unsigned long long)itemCount;
- (void)dealloc;
- (void)setCurrentIndex:(unsigned long long)a0;
- (id)init;
- (void)startDebugging:(id)a0;
- (void)stopDebugging;

@end
