@class ACAccountStore;

@interface CUIKAccountsController : NSObject {
    ACAccountStore *_accountStore;
}

+ (void)initialize;
+ (id)sharedInstance;
+ (void)invalidate;

- (id)accountStore;
- (void)_accountStoreDidChange:(id)a0;
- (void)_localeDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (int)sortOrderForSource:(id)a0;
- (void)dealloc;
- (id)_accountForAccountIdentifier:(id)a0;
- (id)_displayAccountForAccountWithIdentifier:(id)a0;
- (id)accountTypeTitleForSource:(id)a0;
- (id)accountTypeTitleForSourceWithExternalId:(id)a0;
- (BOOL)haveiCloudCalendarAccountInSources:(id)a0;
- (int)sortOrderForSourceType:(long long)a0;
- (int)sortOrderForStoreType:(long long)a0;
- (BOOL)sourceIsManaged:(id)a0;
- (id)titleForSource:(id)a0 forBeginningOfSentence:(BOOL)a1;

@end
