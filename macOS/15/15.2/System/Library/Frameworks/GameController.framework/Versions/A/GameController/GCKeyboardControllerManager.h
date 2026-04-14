@class GCKeyboardAndMouseEmulatedController;

@interface GCKeyboardControllerManager : NSObject {
    GCKeyboardAndMouseEmulatedController *_emulatedController;
}

@property (nonatomic) int emulatedControllerMapping;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)ensureEmulatedControllerWithDevice:(id)a0 added:(BOOL)a1;
- (id)initEmulatedControllerWithMapping:(int)a0;
- (void)onKeyboardOrMouseConnectionStateChanged:(id)a0;

@end
