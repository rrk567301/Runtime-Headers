@class NSTimer;

@interface WindowReopener : NSObject {
    NSTimer *saveWindowsTimer;
}

+ (void)reopenWindows;

- (void)windowWillClose:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)saveWindows;
- (void)_reallySaveWindows;
- (id)arrayOfWindowControllerNamesToReopenAtLaunch;
- (void)reopenWithArrayOfWindowControllerNames:(id)a0;

@end
