@class NSObject, NSString, NSArray, NSIndexSet, FI_TKeyValueObserverGlue, BRContainer, FI_TNotificationCenterObserverGlue;

@interface FI_TICloudAccountManager : NSObject <TCoalescingNodeObserverProtocol> {
    struct TriStateBool { int fState; } fLoggedIntoICloud;
    struct TriStateBool { int fState; } fICloudDriveEnabled;
    struct TriStateBool { int fState; } fUserHasDeclinedUpgrade;
    struct TriStateBool { int fState; } fFirstSyncComplete;
    struct TriStateBool { int fState; } fSynchingDesktop;
    struct TriStateBool { int fState; } fSynchingDocuments;
    struct TriStateBool { int fState; } fMainIsOverQuota;
    struct TriStateBool { int fState; } fDSIsOverQuota;
    struct TriStateBool { int fState; } fAppSynchingDocuments;
    BRContainer *fMainDefaultContainer;
    BRContainer *fDSDefaultContainer;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _providersContainer;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _desktopInHome;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _documentsInHome;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _homeObserver;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _providersObserver;
    struct TFENode { struct OpaqueNodeRef *fNodeRef; } _iCloudAccountsContainer;
    struct shared_ptr<TCoalescingNodeObserverCocoaBridge> { struct TCoalescingNodeObserverCocoaBridge *__ptr_; struct __shared_weak_count *__cntrl_; } _iCloudAccountsObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } fiCloudAccountTokenDidChangeObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } fContainerListDidChangeObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } fMainOverQuotaObserver;
    struct TKeyValueObserver { struct TNSRef<FI_TKeyValueObserverGlue, void> { FI_TKeyValueObserverGlue *fRef; } fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; struct TNSRef<NSIndexSet, void> { NSIndexSet *fRef; } fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } fDSOverQuotaObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleton;
+ (BOOL)userHasDeclinedUpgrade;
+ (BOOL)userIsSynchingDocuments;
+ (BOOL)showICloudDriveContent;
+ (BOOL)desktopIsInTheCloud;
+ (BOOL)documentsIsInTheCloud;
+ (BOOL)mainAccountIsOverQuota;
+ (BOOL)dataSeparatedAccountIsOverQuota;
+ (BOOL)isMaxTier:(BOOL)a0;
+ (BOOL)signedIniCloud;
+ (BOOL)iCloudAccountManagementAvailable;
+ (BOOL)shouldDisambiguateDesktopAndDocuments;
+ (BOOL)firstSyncCompleted;
+ (void)postOverQuotaChange;
+ (void)checkForFileProviderChanges;
+ (void)postStatusChange;
+ (BOOL)appSyncingDocuments;

- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;
- (id)_init;
- (id).cxx_construct;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (void)providerAdded:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)postFPProviderChange;
- (void)dataSeparatedAccountAdded;
- (void)providerRemoved:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)dataSeparatedAccountRemoved;
- (struct pair<bool, bool> { BOOL x0; BOOL x1; })updateLoginState:(BOOL)a0 userHasDeclinedUpgrade:(BOOL)a1 firstSyncDownComplete:(BOOL)a2 syncDesktop:(BOOL)a3 syncDocuments:(BOOL)a4 loggedIntoIcloud:(BOOL)a5;
- (void)computeLoginState;
- (void)computeIsOverQuota;
- (BOOL)isSynchingDocuments;
- (BOOL)hasDeclinedUpgrade;
- (BOOL)firstSyncHasCompleted;
- (BOOL)isSignedIntoICloud;
- (BOOL)desktopInTheCloud;
- (BOOL)documentsInTheCloud;
- (BOOL)isMainOverQuota;
- (BOOL)isDataSeparatedOverQuota;
- (BOOL)appIsSyncingDocuments;
- (struct TFENode { struct OpaqueNodeRef *x0; })dataSeparatedAccount;
- (void)iCloudAccountAvailabilityChanged;

@end
