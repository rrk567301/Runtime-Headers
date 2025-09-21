@class NSString, NSBundle;

@interface CPInputSource : InputSource {
    NSString *fShowPalatteString;
    NSString *fHidePalatteString;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (void).cxx_destruct;
- (id)bundle;
- (id)bundleID;
- (id)displayName;
- (char)activate:(id)a0;
- (char)isSelected;
- (id)newIcon;
- (id)newOriginalIcon;
- (char)activateForcibly:(id)a0;
- (char)activateForciblyWithMethod:(long long)a0 sender:(id)a1;
- (char)activateFromMenuItem:(id)a0;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
- (id)newAlternateIcon;
- (id)newPaletteIcon;

@end
