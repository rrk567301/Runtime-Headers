@class NSString;

@interface CLKDistribuitedPreferences : CLKPreferences {
    NSString *persistentDomainName;
    unsigned short atomicChangePreferencesCount;
    BOOL disablePersistentDomainDidChangeNotification;
}

@property (retain, nonatomic) NSString *persistentDomainName;
@property (readonly) BOOL isPersistentDomainNameNew;

- (void)finalize;
- (void)dealloc;
- (void)setDateFormat:(id)a0;
- (id)preferences;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)setIsAnalog:(BOOL)a0;
- (void)setFlashDateSeparators:(BOOL)a0;
- (id)initWithLocale:(id)a0 persistentDomainName:(id)a1;
- (id)_extraDescription;
- (void)reloadFromPersistentDomain;
- (void)_persistentDomainDidChangeNotificationHandler:(id)a0;
- (void)_unregisterForPersistentDomainDidChangeNotification;
- (void)_savePreferencesToPersistentDomain;
- (void)_postPersistentDomainDidChangeNotification;
- (void)_registerForPersistentDomainDidChangeNotification;
- (void)_savePreferencesAndNotify;
- (void)willChangePreferences;
- (void)didChangePreferences;

@end
