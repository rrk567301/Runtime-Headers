@class PXSuggestionToken, NSArray, NSMutableSet, PXPeoplePagingSuggestionProvider;
@protocol PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate, PXPerson;

@interface PXPeopleSuggestionManager : NSObject

@property (nonatomic) BOOL didReachEnd;
@property (retain, nonatomic) id<PXPerson> person;
@property (retain, nonatomic) PXSuggestionToken *suggestionToken;
@property (nonatomic) unsigned long long userConfirmationsCount;
@property (nonatomic) unsigned long long autoConfirmationsCount;
@property (nonatomic) unsigned int confirmYesSoundID;
@property (nonatomic) unsigned int confirmNoSoundID;
@property (retain, nonatomic) PXPeoplePagingSuggestionProvider *suggestionProvider;
@property (retain, nonatomic) NSMutableSet *confirmedSuggestions;
@property (retain, nonatomic) NSMutableSet *rejectedSuggestions;
@property (retain, nonatomic) NSMutableSet *skippedSuggestions;
@property (weak, nonatomic) id<PXPeopleSuggestionManagerDelegate> delegate;
@property (retain, nonatomic) id<PXPeopleSuggestionManagerDataSource> dataSource;
@property (nonatomic) BOOL mute;
@property (readonly, nonatomic) NSArray *currentSuggestions;
@property (readonly, nonatomic) BOOL canUndo;
@property (readonly, nonatomic) BOOL isLoading;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)undo;
- (id)initWithPerson:(id)a0;
- (void)removeAllSuggestions;
- (void)preloadSounds;
- (void)markSuggestionsAsSkipped:(id)a0;
- (void)requestNextSuggestion;
- (void)markSuggestions:(id)a0 confirmed:(BOOL)a1 wantsSound:(BOOL)a2;
- (void)commitUserResponses;
- (BOOL)isSuggestionConfirmed:(id)a0;
- (void)_notifyDelegateWeHaveMoreSuggestions:(BOOL)a0;
- (void)_loadMoreSuggestionsWithCompletion:(id /* block */)a0;
- (unsigned int)_soundIdWithFilename:(id)a0;
- (void)requestNextSuggestionsWithPageLimit:(unsigned long long)a0;
- (BOOL)_fetchingSuggestions;
- (void)_playConfirmYesSound;
- (void)_playConfirmNoSound;
- (void)cancelPendingSuggestionLoading;
- (id)commitUserResponsesToPerson:(id)a0;
- (id)_nonSkippedSuggestionsForSuggestions:(id)a0;

@end
