@class NSString, EMListUnsubscribeCommand, SGSuggestionPresenter;
@protocol SGSuggestion, SGSuggestionDelegate;

@interface EMListUnsubscribeSuggestion : NSObject <SGSuggestion, SGSuggestionCategory>

@property (class, readonly, nonatomic) NSString *suggestionPrimaryActionString;
@property (class, readonly, nonatomic) NSString *unsubscribeTitleAlertString;
@property (class, readonly, nonatomic) NSString *suggestionDismissActionTitle;
@property (class, readonly, nonatomic) NSString *suggestionPrimaryActionStringICloud;
@property (class, readonly, nonatomic) NSString *unsubscribeTitleAlertStringICloud;

@property (retain, nonatomic) EMListUnsubscribeCommand *listUnsubscribeCommand;
@property (weak, nonatomic) SGSuggestionPresenter *suggestionPresenter;
@property (readonly, nonatomic) id<SGSuggestion> suggestion;
@property (readonly, nonatomic) NSString *unsubscribeMessageAlertString;
@property (nonatomic) BOOL shouldShowICloudUnsubscribe;
@property (weak, nonatomic) id<SGSuggestionDelegate> suggestionDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)unsubscribeSuggestionComparator;

- (void)ignore;
- (void)unsubscribe;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)suggestionTitle;
- (id)suggestionImage;
- (void)_sendAnalyticsForUnsubscribe:(long long)a0;
- (long long)suggestionActionButtonType;
- (id)suggestionCategory;
- (id)suggestionCategoryId;
- (id)suggestionCategoryImage;
- (id)suggestionCategoryLocalizedCountOfItems:(id)a0;
- (id)suggestionCategorySubtitleForItems:(id)a0;
- (id)suggestionCategoryTitle;
- (id)suggestionCategoryTitleForItems:(id)a0;
- (id /* block */)suggestionComparator;
- (id)suggestionDismissAction;
- (id)suggestionPrimaryAction;

@end
