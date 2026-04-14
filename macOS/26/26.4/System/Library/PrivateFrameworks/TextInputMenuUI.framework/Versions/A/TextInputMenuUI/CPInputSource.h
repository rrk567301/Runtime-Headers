@class NSString, NSBundle;

@interface CPInputSource : InputSource {
    NSString *fShowPalatteString;
    NSString *fHidePalatteString;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (BOOL)isSelected;
- (id)displayName;
- (id)bundleID;
- (id)bundle;
- (void).cxx_destruct;
- (BOOL)activate:(id)a0;
- (id)newIcon;
- (id)newOriginalIcon;
- (BOOL)activateForcibly:(id)a0;
- (BOOL)activateForciblyWithMethod:(long long)a0 sender:(id)a1;
- (BOOL)activateFromMenuItem:(id)a0;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
- (id)newAlternateIcon;
- (id)newPaletteIcon;

@end
