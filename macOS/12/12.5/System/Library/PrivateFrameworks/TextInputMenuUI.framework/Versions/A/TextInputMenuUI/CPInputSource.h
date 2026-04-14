@class NSString, NSBundle;

@interface CPInputSource : InputSource {
    NSString *fShowPalatteString;
    NSString *fHidePalatteString;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
}

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;

- (void)dealloc;
- (id)bundleID;
- (id)displayName;
- (id)bundle;
- (BOOL)activate:(id)a0;
- (BOOL)isSelected;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
- (BOOL)activateForcibly:(id)a0;
- (id)newIcon;
- (id)newOriginalIcon;
- (id)newAlternateIcon;
- (id)newPaletteIcon;

@end
