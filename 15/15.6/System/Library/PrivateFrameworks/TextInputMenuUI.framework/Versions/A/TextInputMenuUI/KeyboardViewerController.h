@class NSString, NSImage;

@interface KeyboardViewerController : NSObject

@property (class, readonly) char isEnabled;

@property (readonly, copy) NSString *showKeyboardViewerString;
@property (readonly, copy) NSString *hideKeyboardViwerString;
@property (readonly, retain) NSImage *icon;
@property (readonly, copy) NSString *displayName;

+ (id)sharedController;
+ (void)toggle;

- (void).cxx_destruct;
- (id)hideKeyboardViewerString;

@end
