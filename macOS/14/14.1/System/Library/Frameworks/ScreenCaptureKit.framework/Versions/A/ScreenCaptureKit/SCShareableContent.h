@class NSArray;

@interface SCShareableContent : NSObject {
    NSArray *_windows;
    NSArray *_displays;
    NSArray *_applications;
}

@property (readonly) NSArray *windows;
@property (readonly) NSArray *displays;
@property (readonly) NSArray *applications;

+ (void)getShareableContentWithCompletionHandler:(id /* block */)a0;
+ (void)createShareableContentWithWindows:(id)a0 displays:(id)a1 applications:(id)a2 withCompletionHandler:(id /* block */)a3;
+ (void)fetchShareableContentWithOption:(unsigned int)a0 windowID:(unsigned int)a1 completionHandler:(id /* block */)a2;
+ (void)fetchWindowForWindowID:(unsigned int)a0 withCompletionHandler:(id /* block */)a1;
+ (id)getDisplayForDisplayId:(unsigned int)a0 forWindow:(id)a1 fromDisplays:(id)a2;
+ (id)getInformationForFilter:(id)a0;
+ (void)getShareableContentExcludingDesktopWindows:(BOOL)a0 onScreenWindowsOnly:(BOOL)a1 completionHandler:(id /* block */)a2;
+ (void)getShareableContentExcludingDesktopWindows:(BOOL)a0 onScreenWindowsOnlyAboveWindow:(id)a1 completionHandler:(id /* block */)a2;
+ (void)getShareableContentExcludingDesktopWindows:(BOOL)a0 onScreenWindowsOnlyBelowWindow:(id)a1 completionHandler:(id /* block */)a2;
+ (id)infoForFilter:(id)a0;

- (void).cxx_destruct;
- (id)initWithWindows:(id)a0 displays:(id)a1 runningApplications:(id)a2;

@end
