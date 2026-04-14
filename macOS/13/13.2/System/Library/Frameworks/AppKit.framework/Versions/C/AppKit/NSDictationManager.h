@class NSString;

@interface NSDictationManager : NSObject <NSMenuItemValidation> {
    long long _lastNotifiedState;
    struct __TISInputSource { } *_cachedInputSourceRef;
    BOOL _menuKeyEquivalentNeedsUpdating;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultManager;
+ (BOOL)isDictationSupported;
+ (id)dictationMenuItemsForMenu:(id)a0;

- (void)dealloc;
- (id)init;
- (BOOL)validateMenuItem:(id)a0;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void)_dictationKeyChanged;
- (void)dictationItemSelected:(id)a0;
- (void)_updateKeyEquivalentForMenuItem:(id)a0;
- (BOOL)_dictationIsEnabled;
- (BOOL)_dictationIsAllowed;
- (struct __TISInputSource { } *)_inputSourceRef;

@end
