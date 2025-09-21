@class NSURL;
@protocol WKWebExtensionWindow, WKWebExtensionTab;

@interface WKWebExtensionTabConfiguration : NSObject

@property (retain, nonatomic, setter=_setWindow:) id<WKWebExtensionWindow> window;
@property (nonatomic, setter=_setIndex:) unsigned long long index;
@property (retain, nonatomic, setter=_setParentTab:) id<WKWebExtensionTab> parentTab;
@property (copy, nonatomic, setter=_setURL:) NSURL *url;
@property (nonatomic, setter=_setShouldBeActive:) char shouldBeActive;
@property (nonatomic, setter=_setShouldAddToSelection:) char shouldAddToSelection;
@property (nonatomic, setter=_setShouldBePinned:) char shouldBePinned;
@property (nonatomic, setter=_setShouldBeMuted:) char shouldBeMuted;
@property (nonatomic, setter=_setShouldReaderModeBeActive:) char shouldReaderModeBeActive;

- (void).cxx_destruct;
- (id)_init;

@end
