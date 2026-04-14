@class NSString, NSDate;
@protocol MTLLibrary, MTLDevice;

@interface CCContextDeviceGroupLibraries : NSObject {
    id<MTLLibrary> _bundleLibrary;
    id<MTLLibrary> _hotloadingLibrary;
    NSDate *_hotloadingLibraryModstamp;
    BOOL _isReloadNeeded;
    BOOL _isHotloadingLibraryUsed;
    BOOL _doHotloading;
    NSString *_path;
    id<MTLDevice> _mtlDevice;
}

- (id)library;
- (void).cxx_destruct;
- (void)reloadIfNeeded;
- (void)updateModstamps;
- (id)init:(id)a0 doHotloading:(BOOL)a1;
- (BOOL)isRestartContextNeeded;
- (BOOL)isSameDevice:(id)a0;
- (void)reloadBundleLibrary;

@end
