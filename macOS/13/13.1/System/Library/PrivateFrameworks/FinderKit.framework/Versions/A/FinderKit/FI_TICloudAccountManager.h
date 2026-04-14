@class NSObject, NSString, NSArray, NSIndexSet, FI_TKeyValueObserverGlue, BRContainer, FI_TNotificationCenterObserverGlue;

@interface FI_TICloudAccountManager : NSObject <TCoalescingNodeObserverProtocol> {
    struct TriStateBool { unsigned char fState; } fLoggedIntoICloud;
    struct TriStateBool { unsigned char fState; } fICloudDriveEnabled;
    struct TriStateBool { unsigned char fState; } fUserHasDeclinedUpgrade;
    struct TriStateBool { unsigned char fState; } fFirstSyncComplete;
    struct TriStateBool { unsigned char fState; } fSynchingDesktop;
    struct TriStateBool { unsigned char fState; } fSynchingDocuments;
    struct TriStateBool { unsigned char fState; } fAppSynchingDocuments;
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
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } fMainOverQuotaObserver;
    struct TKeyValueObserver { FI_TKeyValueObserverGlue *fObserver; NSObject *fObjectToObserve; NSArray *fArrayOfObjectsToObserve; NSIndexSet *fIndexesOfObjectsToObserve; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fKeyPathToObserve; } fDSOverQuotaObserver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)singleton;
+ (void)checkForFileProviderChanges;
+ (void)postStatusChange;
+ (void)postOverQuotaChange;
+ (BOOL)userIsSynchingDocuments;
+ (BOOL)userHasDeclinedUpgrade;
+ (BOOL)firstSyncCompleted;
+ (BOOL)showICloudDriveContent;
+ (BOOL)iCloudAccountManagementAvailable;
+ (BOOL)signedIniCloud;
+ (BOOL)shouldDisambiguateDesktopAndDocuments;
+ (BOOL)desktopIsInTheCloud;
+ (BOOL)documentsIsInTheCloud;
+ (BOOL)appSyncingDocuments;
+ (void)fetchUpToDateStatusForICloudFlavor:(int)a0 completion:(const void *)a1;

- (void)dealloc;
- (id)_init;
- (void)invalidate;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)coalescingNodeObserver:(void *)a0 nodesAdded:(const void *)a1 toObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesChanged:(const void *)a1 inObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 nodesDeleted:(const void *)a1 fromObservedNode:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a2;
- (void)coalescingNodeObserver:(void *)a0 openSyncCompleted:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a1;
- (struct TFENode { struct OpaqueNodeRef *x0; })dataSeparatedAccount;
- (void)iCloudAccountAvailabilityChanged;
- (void)postFPProviderChange;
- (void)providerAdded:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)dataSeparatedAccountAdded;
- (void)dataSeparatedAccountRemoved;
- (void)providerRemoved:(const struct TFENode { struct OpaqueNodeRef *x0; } *)a0;
- (void)computeIsOverQuota;
- (void)computeLoginState;
- (struct pair<bool, bool> { BOOL x0; BOOL x1; })updateLoginState:(BOOL)a0 userHasDeclinedUpgrade:(BOOL)a1 firstSyncDownComplete:(BOOL)a2 syncDesktop:(BOOL)a3 syncDocuments:(BOOL)a4 loggedIntoIcloud:(BOOL)a5;
- (BOOL)isSynchingDocuments;
- (BOOL)isSignedIntoICloud;
- (BOOL)hasDeclinedUpgrade;
- (BOOL)firstSyncHasCompleted;
- (BOOL)desktopInTheCloud;
- (BOOL)documentsInTheCloud;
- (BOOL)appIsSyncingDocuments;

@end
