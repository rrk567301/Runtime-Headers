@class PFPosterExtensionProvider, NSMapTable;

@interface PFPosterExtensionInstancePool : NSObject {
    PFPosterExtensionProvider *_extensionProvider;
    double _poolEntryToRelinquishTime;
    NSMapTable *_extensionBundleIdentifierToReasonMap;
    NSMapTable *_relinquishTimerMap;
}

- (void)dealloc;
- (void).cxx_destruct;
- (id)_buildKeyForExtensionIdentifier:(id)a0 reason:(id)a1;
- (id)acquireInstanceForExtensionWithIdentifier:(id)a0 error:(out id *)a1;
- (id)initWithExtensionProvider:(id)a0 poolEntryToRelinquishTime:(double)a1;
- (void)relinquishExtensionInstance:(id)a0;

@end
