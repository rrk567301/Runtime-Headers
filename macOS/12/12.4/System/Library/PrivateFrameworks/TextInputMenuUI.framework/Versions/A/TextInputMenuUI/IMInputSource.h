@class NSDictionary, NSString, NSBundle;

@interface IMInputSource : InputSource {
    NSString *fIMDisplayName;
    NSString *fComponentBundleID;
    NSBundle *fSourceBundle;
    short fParentScript;
}

@property long long dynamicSourceNameMode;
@property (readonly) NSDictionary *dynamicSourceNameKeys;
@property (readonly) NSString *dynamicSourceName;
@property (readonly) NSString *familyID;

+ (id)inputSourceWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
+ (unsigned long long)UIOrderForInputSource:(struct __TSMInputSource { } *)a0 mode:(struct __TSMInputSource { } *)a1;

- (void)dealloc;
- (id)bundleID;
- (id)displayName;
- (BOOL)isRemovable;
- (BOOL)remove;
- (id)bundle;
- (id)initWithTSMInputSourceRef:(struct __TSMInputSource { } *)a0 andOwner:(id)a1;
- (BOOL)activateForcibly:(id)a0;
- (id)hudDisplayName;
- (id)newAlternateIcon;
- (id)newPaletteIcon;
- (void)updateSelfWithDictionary:(id)a0;
- (short)parentScript;
- (id)menuTitleName;
- (long long)UIOrder;

@end
