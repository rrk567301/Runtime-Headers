@class NSString, NSArray, NSMutableDictionary, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface SystemListener : NSObject {
    BOOL _locked_hasUpdatedLocale;
    BOOL _locked_hasUpdatedFirstWeekDay;
    NSLocale *_locked_currentLocale;
    NSString *_locked_currentRegion;
    unsigned long long _locked_currentFirstWeekDay;
    NSArray *_locked_currentPreferredLanguages;
    BOOL _locked_semanticSearchEnabled;
    NSArray *_locked_supportedSemanticLanguages;
    NSMutableDictionary *_locked_currentResources;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _autoUpdatingLocale;
}

@property (nonatomic) BOOL force;

+ (id)defaultListener;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)currentLocale;
- (BOOL)semanticSearchEnabled;
- (id)currentRegion;
- (void)updateResources;
- (unsigned long long)currentFirstWeekDay;
- (id)currentPreferredLanguages;
- (BOOL)hasUpdatedFirstWeekDay;
- (BOOL)hasUpdatedLocale;
- (BOOL)hasUpdatedResources;
- (id)pathsForContentType:(id)a0 locale:(id)a1;
- (void)setAutoUpdatingLocale:(BOOL)a0;
- (id)supportedSemanticLanguages;
- (void)updateLocale;
- (void)updateLocaleWithLocale:(id)a0 preferredLanguages:(id)a1 force:(BOOL)a2;

@end
