@class NSURL;
@protocol _WKWebExtensionWindow, _WKWebExtensionTab;

@interface _WKWebExtensionTabCreationOptions : NSObject

@property (retain, nonatomic, setter=_setDesiredWindow:) id<_WKWebExtensionWindow> desiredWindow;
@property (nonatomic, setter=_setDesiredIndex:) unsigned long long desiredIndex;
@property (retain, nonatomic, setter=_setDesiredParentTab:) id<_WKWebExtensionTab> desiredParentTab;
@property (copy, nonatomic, setter=_setDesiredURL:) NSURL *desiredURL;
@property (nonatomic, setter=_setShouldSelect:) BOOL shouldSelect;
@property (nonatomic, setter=_setShouldExtendSelection:) BOOL shouldExtendSelection;
@property (nonatomic, setter=_setShouldPin:) BOOL shouldPin;
@property (nonatomic, setter=_setShouldMute:) BOOL shouldMute;
@property (nonatomic, setter=_setShouldShowReaderMode:) BOOL shouldShowReaderMode;

- (void).cxx_destruct;
- (id)_init;

@end
