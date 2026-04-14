@class NSObject, FI_TNotificationCenterObserverGlue;

@interface FI_TUserDefaults : NSUserDefaults {
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _prefsNeedToBeSyncedObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _showAllExtensionsObserver;
    struct TNotificationCenterObserver { NSObject *fObservedObject; struct TString { struct TRef<const __CFString *, TRetainReleasePolicy<CFStringRef>> { struct __CFString *fRef; } fString; } fNotificationName; FI_TNotificationCenterObserverGlue *fFunctorGlue; BOOL fIsDistributedObserving; struct function<NSNotificationCenter *()> { struct __value_func<NSNotificationCenter *()> { struct type { unsigned char __lx[24]; } __buf_; void *__f_; } __f_; } fCenterProvider; } _forwardingDistributedObserver;
}

+ (BOOL)synchronize;
+ (id)standardUserDefaults;
+ (BOOL)showAllExtensions;
+ (void)setShowAllExtensions:(BOOL)a0;
+ (void)resetStandardUserDefaults;
+ (id)userDefaults;
+ (void)resetUserDefaults;
+ (id)objectForRegID:(int)a0;
+ (void)setObject:(id)a0 forRegID:(int)a1;
+ (void)removeObjectForRegID:(int)a0;
+ (BOOL)regIDExists:(int)a0;
+ (BOOL)boolForRegID:(int)a0;
+ (void)setBool:(BOOL)a0 forRegID:(int)a1;
+ (float)floatForRegID:(int)a0;
+ (void)setFloat:(float)a0 forRegID:(int)a1;
+ (double)cgFloatForRegID:(int)a0;
+ (void)setCGFloat:(double)a0 forRegID:(int)a1;
+ (double)doubleForRegID:(int)a0;
+ (void)setDouble:(double)a0 forRegID:(int)a1;
+ (long long)integerForRegID:(int)a0;
+ (void)setInteger:(long long)a0 forRegID:(int)a1;
+ (long long)sint64ForRegID:(int)a0;
+ (void)setSInt64:(long long)a0 forRegID:(int)a1;
+ (unsigned int)fourCharCodeForRegID:(int)a0;
+ (void)setFourCharCode:(unsigned int)a0 forRegID:(int)a1;
+ (struct CGPoint { double x0; double x1; })pointForRegID:(int)a0;
+ (void)setPoint:(const struct CGPoint { double x0; double x1; } *)a0 forRegID:(int)a1;
+ (struct CGSize { double x0; double x1; })sizeForRegID:(int)a0;
+ (void)setSize:(const struct CGSize { double x0; double x1; } *)a0 forRegID:(int)a1;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForRegID:(int)a0;
+ (void)setRect:(const struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a0 forRegID:(int)a1;
+ (id)stringForRegID:(int)a0;
+ (void)setString:(id)a0 forRegID:(int)a1;
+ (id)arrayForRegID:(int)a0;
+ (void)setArray:(id)a0 forRegID:(int)a1;
+ (id)dictionaryForRegID:(int)a0;
+ (void)setDictionary:(id)a0 forRegID:(int)a1;
+ (BOOL)showAllFiles;
+ (void)_setShowAllFiles:(BOOL)a0;
+ (void)setShowAllFiles:(BOOL)a0;
+ (void)toggleShowAllFilesWithoutWritingPref;
+ (BOOL)showSystemFiles;
+ (void)sendRegIDChangedNotification:(int)a0;
+ (void)sendKeyChangedNotification:(const void *)a0;

- (id)init;
- (id)objectForKey:(id)a0;
- (void)setObject:(id)a0 forKey:(id)a1;
- (void)removeObjectForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)synchronize;
- (id).cxx_construct;
- (id)objectForRegID:(int)a0;
- (void)setObject:(id)a0 forRegID:(int)a1;
- (void)removeObjectForRegID:(int)a0;
- (BOOL)regIDExists:(int)a0;
- (void)preferencesNeedToBeSynced;
- (void)showAllExtensionsPrefsChangedByLaunchServices;
- (id)_finderObjectForKey:(id)a0;
- (void)_finderSetObject:(id)a0 forKey:(id)a1;
- (void)setObjectIfDifferent:(id)a0 forKey:(id)a1;
- (BOOL)_boolForRegID:(int)a0;

@end
