@class NSString;

@interface CLKDistribuitedPreferences : CLKPreferences {
    NSString *persistentDomainName;
    unsigned short atomicChangePreferencesCount;
    BOOL disablePersistentDomainDidChangeNotification;
}

@property (retain, nonatomic) NSString *persistentDomainName;
@property (readonly) BOOL isPersistentDomainNameNew;

- (void)dealloc;
- (void)finalize;
- (void)setDateFormat:(id)a0;
- (id)preferences;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithLocale:(id)a0 persistentDomainName:(id)a1;
- (id)_extraDescription;
- (void)_persistentDomainDidChangeNotificationHandler:(id)a0;
- (void)setIsAnalog:(BOOL)a0;
- (void)setFlashDateSeparators:(BOOL)a0;
- (void)_postPersistentDomainDidChangeNotification;
- (void)_registerForPersistentDomainDidChangeNotification;
- (void)_unregisterForPersistentDomainDidChangeNotification;
- (void)_savePreferencesToPersistentDomain;
- (void)reloadFromPersistentDomain;
- (void)_savePreferencesAndNotify;
- (void)willChangePreferences;
- (void)didChangePreferences;

@end
