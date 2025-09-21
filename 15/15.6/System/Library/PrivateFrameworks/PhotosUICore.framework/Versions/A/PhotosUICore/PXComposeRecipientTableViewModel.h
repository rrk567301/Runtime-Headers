@class NSArray, NSString, PXComposeRecipientDataSourceManager, PXPeopleSuggestionsMediaProvider;

@interface PXComposeRecipientTableViewModel : PXObservable

@property (readonly, nonatomic) PXComposeRecipientDataSourceManager *composeRecipientDataSourceManager;
@property (readonly, nonatomic) PXPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider;
@property (readonly, copy, nonatomic) NSArray *recipients;
@property (readonly, copy, nonatomic) NSArray *composeRecipients;
@property (readonly, nonatomic) char canAddRecipients;
@property (readonly, nonatomic) char canDeleteRecipients;
@property (readonly, nonatomic) char canSelectRecipients;
@property (readonly, copy, nonatomic) NSString *headerTitle;
@property (readonly, copy, nonatomic) NSString *footerTitle;
@property (readonly, nonatomic) char useGroupedBackgroundColor;

- (id)init;
- (void).cxx_destruct;
- (void)setRecipients:(id)a0;
- (void)setHeaderTitle:(id)a0;
- (void)performChanges:(id /* block */)a0;
- (void)setFooterTitle:(id)a0;
- (id)initWithComposeRecipientDataSourceManager:(id)a0;
- (void)setCanAddRecipients:(char)a0;
- (void)setCanDeleteRecipients:(char)a0;
- (void)setCanSelectRecipients:(char)a0;
- (void)setComposeRecipients:(id)a0;
- (void)setUseGroupedBackgroundColor:(char)a0;

@end
