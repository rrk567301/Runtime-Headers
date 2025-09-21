@class NSTimer;

@interface WindowReopener : NSObject {
    NSTimer *saveWindowsTimer;
}

+ (void)reopenWindows;

- (void)windowWillClose:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)saveWindows;
- (void)_reallySaveWindows;
- (id)arrayOfWindowControllerNamesToReopenAtLaunch;
- (void)reopenWithArrayOfWindowControllerNames:(id)a0;

@end
