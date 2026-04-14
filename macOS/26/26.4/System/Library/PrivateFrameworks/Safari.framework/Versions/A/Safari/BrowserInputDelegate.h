@class NSString, BrowserViewController;

@interface BrowserInputDelegate : NSObject <_WKInputDelegate> {
    BrowserViewController *_browserViewController;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
