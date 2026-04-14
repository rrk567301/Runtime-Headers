@class FI_TKeyValueObserverGlue, NSString, NSArray, FI_TButton, NSObject, FI_TTextField, FI_TPopoverController, NSIndexSet, FI_TAirDropDiscoveryController;

@interface FI_TAirDropLegacyModePopoverViewController : FI_TViewController {
    struct TNSRef<FI_TAirDropDiscoveryController, void> { FI_TAirDropDiscoveryController *fRef; } _discoveryController;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _legacyModeEnabledObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } _legacyMachineObserver;
    struct TNSRef<FI_TPopoverController, void> { FI_TPopoverController *fRef; } _popoverController;
    FI_TTextField *_messageTextField;
    FI_TButton *_toggleLegacyModeButton;
}

@property (readonly) FI_TAirDropDiscoveryController *discoveryController;
@property (readonly, retain, nonatomic) NSString *messageText;
@property (readonly, retain, nonatomic) NSString *buttonTitle;
@property (readonly, nonatomic) BOOL isButtonEnabled;

+ (id)keyPathsForValuesAffectingIsLegacyMachine;
+ (id)keyPathsForValuesAffectingIsButtonEnabled;

- (void).cxx_destruct;
- (id).cxx_construct;
- (id)messageText;
- (id)nibName;
- (id)buttonTitle;
- (void)initCommon;
- (void)configureView;
- (void)setPopoverController:(id)a0;
- (BOOL)isLegacyMachine;
- (BOOL)isButtonEnabled;
- (void)toggleAirDropLegacyMode:(id)a0;
- (void)legacyModeOrMachineChanged;

@end
