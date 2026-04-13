@class NSString, NSImage, NSURL, NSDate, NSLock;

@interface NSRunningApplication : NSObject {
    void *_asn;
    void **_helpers;
    id _obsInfo;
    NSLock *_lock;
    NSString *_bundleID;
    NSString *_localizedName;
    NSURL *_bundleURL;
    NSURL *_executableURL;
    NSDate *_launchDate;
    NSImage *_icon;
    int _pid;
    unsigned int _lastSeed;
    unsigned int _activeSeed;
    unsigned int _staleSeed;
    unsigned long long _obsMask;
    struct { unsigned char fetchedDynamic : 1; unsigned char deadToUs : 1; unsigned char terminated : 1; unsigned char finishedLaunching : 1; unsigned char hidden : 1; unsigned char active : 1; unsigned char ownsMenuBar : 1; unsigned char arch : 3; unsigned char activationPolicy : 3; unsigned int reserved1 : 19; } _aflags;
}

@property (class, readonly) NSRunningApplication *currentApplication;

@property (readonly, getter=isTerminated) BOOL terminated;
@property (readonly, getter=isFinishedLaunching) BOOL finishedLaunching;
@property (readonly, getter=isHidden) BOOL hidden;
@property (readonly, getter=isActive) BOOL active;
@property (readonly) BOOL ownsMenuBar;
@property (readonly) long long activationPolicy;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSURL *bundleURL;
@property (readonly, copy) NSURL *executableURL;
@property (readonly) int processIdentifier;
@property (readonly, copy) NSDate *launchDate;
@property (readonly) NSImage *icon;
@property (readonly) long long executableArchitecture;

+ (void)initialize;
+ (id)runningApplicationsWithBundleIdentifier:(id)a0;
+ (id)runningApplicationWithProcessIdentifier:(int)a0;
+ (id)_allApplications;
+ (id)_allRunningApplications;
+ (id)_TALTerminatedApplications;
+ (id)runningApplicationWithAuditToken:(struct { unsigned int x0[8]; })a0;
+ (id)_transformASNArrayToAppArrayWithRelease:(struct __CFArray { } *)a0;
+ (BOOL)_yieldFrontReservationAndMaybeDeactivateApp:(BOOL)a0;
+ (void)_dumpRunningApplicationObservationInfo;
+ (void)terminateAutomaticallyTerminableApplications;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)setObservationInfo:(void *)a0;
- (void)addObserver:(id)a0 forKeyPath:(id)a1 options:(unsigned long long)a2 context:(void *)a3;
- (void *)observationInfo;
- (void)removeObserver:(id)a0 forKeyPath:(id)a1;
- (BOOL)terminate;
- (BOOL)unhide;
- (BOOL)activateWithOptions:(unsigned long long)a0;
- (BOOL)hide;
- (BOOL)_hasASN:(struct __LSASN { } *)a0;
- (id)initWithApplicationSerialNumber:(struct __LSASN { } *)a0;
- (id)_initDeadWithLSDictionary:(struct __CFDictionary { } *)a0 forASN:(struct __LSASN { } *)a1;
- (struct __LSASN { } *)applicationSerialNumber;
- (void)_postWillOrDidChangeNotificationsForKeyIndex:(int)a0 isWill:(BOOL)a1;
- (void)_changeObservingNotificationMask:(unsigned long long)a0 to:(BOOL)a1;
- (void)_updateObservationMask;
- (void)_fetchDynamicPropertiesIfNecessary;
- (void)_applyPropertyChanges:(unsigned long long)a0 fromDictionary:(struct __CFDictionary { } *)a1;
- (void)_updateActiveAndMenuBarOwnerProperties;
- (BOOL)_isAppPropertyUpdatedByLSNotifications:(int)a0;
- (void)_fetchDynamicProperties;
- (BOOL)_preservingStaleProperties;
- (void)_preserveStaleDynamicPropertiesForRemainderOfRunLoop;
- (void)_fetchDynamicPropertiesIfNecessaryOrAppSeedIsOutOfDate;
- (void)_updateOrStaleProperty:(int)a0;
- (void)_applyInformationFromLSDictionary:(id)a0 includeDynamicProperties:(BOOL)a1;
- (void)_fetchStaticInformationWithAtLeastKey:(struct __CFString { } *)a0;
- (BOOL)_getProcessSerialNumber:(struct ProcessSerialNumber { unsigned int x0; unsigned int x1; } *)a0;
- (BOOL)_isProxiedByTalagent;
- (BOOL)_isLSStopped;
- (BOOL)forceTerminate;
- (void)_observeChangeInKey:(int)a0 withDataRef:(void *)a1;
- (void)_checkForUnecessaryLSNotifications;
- (id)_fetchValueForKey:(void *)a0;
- (BOOL)applyPendingPropertyChanges;
- (BOOL)_quittingWillBeNoisyOrLoseData;
- (id)_reasonThatQuittingWillBeNoisyOrLoseData;
- (BOOL)_performWithPSN:(id /* block */)a0;

@end
