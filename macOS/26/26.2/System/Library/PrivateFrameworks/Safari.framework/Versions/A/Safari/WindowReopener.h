@class NSTimer;

@interface WindowReopener : NSObject {
    NSTimer *saveWindowsTimer;
}

+ (void)reopenWindows;

- (void)windowWillClose:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)saveWindows;
- (void)_reallySaveWindows;
- (id)arrayOfWindowControllerNamesToReopenAtLaunch;
- (void)reopenWithArrayOfWindowControllerNames:(id)a0;

@end
