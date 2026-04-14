@class NSTimer;

@interface WindowReopener : NSObject {
    NSTimer *saveWindowsTimer;
}

+ (void)reopenWindows;

- (void)windowWillClose:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)init;
- (void)saveWindows;
- (void)_reallySaveWindows;
- (id)arrayOfWindowControllerNamesToReopenAtLaunch;
- (void)reopenWithArrayOfWindowControllerNames:(id)a0;

@end
