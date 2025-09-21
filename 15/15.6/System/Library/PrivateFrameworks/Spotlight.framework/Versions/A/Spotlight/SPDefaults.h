@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SPDefaults : NSObject {
    long long _useCount;
    char _showedFTE;
    char _showedLearnMore;
    NSObject<OS_dispatch_queue> *_prefsQueue;
}

@property (getter=isSpotEnabled) char spotEnabled;
@property (getter=isHighlightShownWithSpot) char highlightShownWithSpot;
@property (getter=isDemoEnabled) char demoEnabled;
@property char didShowFTE;
@property (readonly) long long parsecMaxResults;
@property (readonly) long long parsecMaxBingResults;
@property (readonly) NSArray *parsecBlessedResults;
@property (readonly) NSString *spotlightExtraQueryFlags;
@property (readonly) long long maxResultsPerGroup;
@property (readonly) char groupResults;
@property (readonly) char customAppPreview;
@property (readonly) char customFolderPreview;
@property (getter=isParsecEnabled) char parsecEnabled;
@property (getter=isTTREnabled) char ttrEnabled;
@property (getter=shouldReloadPrefs) char reloadPrefs;
@property (getter=areSpotlightSuggestionsDisabled) char spotlightSuggestionsDisabled;
@property (readonly, getter=isParsecAllowed) char parsecAllowed;
@property (readonly) NSString *spotlightExtraQueryClause;
@property char clearOnClose;
@property char showedFTE;
@property char showedLearnMore;
@property (readonly) char firstUse;

+ (void)initialize;
+ (char)isParsecEnabled;
+ (char)getShowExtensionStatus;
+ (char)isDeveloper;
+ (id)standardAppDefaults;

- (id)init;
- (void).cxx_destruct;
- (long long)useCount;
- (void)used;
- (void)_used;
- (void)prefsNotificationReceived:(id)a0;
- (void)reloadPrefs;

@end
