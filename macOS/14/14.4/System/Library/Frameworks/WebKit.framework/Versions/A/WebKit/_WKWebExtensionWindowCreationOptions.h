@class NSArray;

@interface _WKWebExtensionWindowCreationOptions : NSObject

@property (nonatomic, setter=_setDesiredFrame:) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } desiredFrame;
@property (nonatomic, setter=_setDesiredWindowType:) long long desiredWindowType;
@property (nonatomic, setter=_setDesiredWindowState:) long long desiredWindowState;
@property (copy, nonatomic, setter=_setDesiredURLs:) NSArray *desiredURLs;
@property (copy, nonatomic, setter=_setDesiredTabs:) NSArray *desiredTabs;
@property (nonatomic, setter=_setShouldFocus:) BOOL shouldFocus;
@property (nonatomic, setter=_setSouldUsePrivateBrowsing:) BOOL shouldUsePrivateBrowsing;

- (void).cxx_destruct;
- (id)_init;

@end
