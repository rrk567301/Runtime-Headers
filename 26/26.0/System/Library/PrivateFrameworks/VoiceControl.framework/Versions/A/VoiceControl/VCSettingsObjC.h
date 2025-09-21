@class NSArray, NSString, NSLocale;

@interface VCSettingsObjC : NSObject

@property (class, nonatomic, readonly) VCSettingsObjC *shared;

@property (nonatomic) BOOL enabled;
@property (nonatomic, readonly) NSArray *supportedLocales;
@property (nonatomic, readonly) NSLocale *activeLocale;
@property (nonatomic, copy) NSString *alwaysShowOverlayType;
@property (nonatomic) BOOL playSoundUponRecognition;
@property (nonatomic) BOOL showTextResponseUponRecognition;
@property (nonatomic) BOOL showUserHints;
@property (nonatomic) BOOL syncVocabularyEntries;
@property (nonatomic, readonly) BOOL carPlayDebugOverlayUIEnabled;
@property (nonatomic) BOOL persistentSleepState;

+ (id)voiceControlLocaleIdentifierFromString:(id)a0;

- (id)init;
- (void)setPreferredLocale:(id)a0;
- (id)bestSupportedLocaleFor:(id)a0;
- (id)engineForLocale:(id)a0;

@end
