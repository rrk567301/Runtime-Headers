@class NSMutableSet, SidecarService, NSString, NSSet, NSArray, NSKeyboardShortcut, NSUUID;

@interface SidecarServiceAction : NSObject <_NSServiceAction> {
    SidecarService *_sidecarService;
    NSKeyboardShortcut *_keyboardShortcut;
    NSMutableSet *_presentationModes;
    NSUUID *_uuid;
}

@property (readonly, nonatomic) SidecarService *sidecarService;
@property (readonly, nonatomic) NSString *qualifiedServiceMessage;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) NSString *categoryTitle;
@property (readonly, nonatomic) NSString *localizedCategoryTitle;
@property (readonly, nonatomic) NSString *bundlePath;
@property (readonly, nonatomic) NSString *localizedServiceDescription;
@property (copy, nonatomic) NSSet *presentationModes;
@property (readonly, copy, nonatomic) NSSet *defaultPresentationModes;
@property (readonly, copy, nonatomic) NSSet *availablePresentationModes;
@property (readonly, nonatomic) char hasCustomIcon;
@property (readonly, nonatomic) char hasBackgroundColor;
@property (readonly, nonatomic) NSArray *combinedSendTypes;
@property (readonly, nonatomic) NSArray *sendFileTypes;
@property (readonly, nonatomic) NSArray *returnTypes;
@property (readonly, nonatomic) NSKeyboardShortcut *defaultKeyboardShortcut;
@property (copy, nonatomic) NSKeyboardShortcut *keyboardShortcut;
@property (copy, nonatomic) NSString *keyEquivalent;
@property (readonly, nonatomic) NSUUID *serviceUUID;
@property (readonly, nonatomic) NSString *shortcutIdentifier;
@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) char isWorkflow;
@property (readonly, nonatomic) char isShortcut;
@property (readonly, nonatomic) char isRestricted;
@property (nonatomic) char isAvailableInContextMenu;
@property (nonatomic) char isAvailableInServicesMenu;
@property (readonly, nonatomic) char isSpellChecker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (char)invokeWithPasteboard:(id)a0;
- (char)invokeWithResponder:(id)a0;
- (void)loadBackgroundColorOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)loadImageOnQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)resetToDefaultAvailability;
- (void)resetToDefaultKeyboardShortcut;
- (void)validateWithResponder:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithService:(id)a0;
- (char)_getIsAvailableInPresentationMode:(id)a0;
- (void)_setIsAvailable:(char)a0 inPresentationMode:(id)a1;

@end
