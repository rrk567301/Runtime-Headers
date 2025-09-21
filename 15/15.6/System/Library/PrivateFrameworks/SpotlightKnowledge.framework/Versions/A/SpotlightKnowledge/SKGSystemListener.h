@class NSString, NSArray, NSURL, NSMutableDictionary, NSLocale, NSObject, NSTimeZone, NSNumber;
@protocol OS_dispatch_queue;

@interface SKGSystemListener : NSObject {
    char _locked_hasDiskCapacity;
    double _locked_lastDiskFlushDate;
    char _locked_hasUpdatedLocale;
    char _locked_isCJK;
    NSLocale *_locked_currentLocale;
    NSString *_locked_currentLanguage;
    NSString *_locked_currentRegion;
    unsigned long long _locked_currentFirstWeekDay;
    NSTimeZone *_locked_currentTimezone;
    NSArray *_locked_currentPreferredLocales;
    NSArray *_locked_currentPreferredLocaleIdentifiers;
    NSArray *_locked_currentPreferredLanguages;
    char _locked_semanticSearchEnabled;
    char _locked_enableEmbeddingsHigherQoS;
    char _locked_enableV2LanguageID;
    NSArray *_locked_supportedSemanticLanguages;
    NSArray *_locked_doNotUpdateList;
    NSURL *_locked_geoIndexPath;
    NSNumber *_locked_geoIndexVersion;
    NSMutableDictionary *_locked_currentResources;
    NSObject<OS_dispatch_queue> *_queue;
    char _autoUpdatingLocale;
}

@property (nonatomic) char force;
@property (readonly, nonatomic) NSLocale *currentLocale;
@property (readonly, nonatomic) NSArray *currentPreferredLocales;
@property (readonly, nonatomic) NSArray *currentPreferredLocaleIdentifiers;
@property (readonly, nonatomic) NSString *currentLanguage;
@property (readonly, nonatomic) NSArray *currentPreferredLanguages;
@property (readonly, nonatomic) NSString *currentRegion;
@property (readonly, nonatomic) char currentLocaleIsCJK;
@property (readonly, nonatomic) NSTimeZone *currentTimezone;
@property (readonly, nonatomic) NSArray *doNotUpdateList;
@property (readonly, nonatomic) NSArray *supportedSemanticLanguages;
@property (readonly, nonatomic) NSURL *geoIndexResourcesURL;
@property (readonly, nonatomic) NSURL *geoPatternsResourcesURL;
@property (readonly, nonatomic) char semanticSearchEnabled;
@property (readonly, nonatomic) char enableEmbeddingsHigherQoS;
@property (readonly, nonatomic) char enableLanguageCheckForEmbedding;
@property (readonly, nonatomic) char enableV2LanguageID;
@property (readonly, nonatomic) char hasDiskCapacity;

+ (id)sharedClientListener;
+ (id)sharedProcessorListener;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (char)isCJK;
- (void)updateResources;
- (unsigned long long)currentFirstWeekDay;
- (char)hasUpdatedLocale;
- (char)hasUpdatedResources;
- (id)pathsForContentType:(id)a0 locale:(id)a1;
- (void)setAutoUpdatingLocale:(char)a0;
- (void)updateLocale;
- (void)updateLocaleWithLocale:(id)a0 preferredLanguages:(id)a1 force:(char)a2;
- (char)parsecIsEnabled;
- (id)initWithPreferredLanguages:(id)a0 locale:(id)a1;
- (id)rootLocale;
- (void)setAutoUpdatingTimezone:(char)a0;
- (void)updateTimezone;

@end
