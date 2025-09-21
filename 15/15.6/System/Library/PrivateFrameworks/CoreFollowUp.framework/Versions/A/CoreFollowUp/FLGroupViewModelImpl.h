@class NSString, NSMutableArray;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSMutableArray *_mutableItems;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *rowTitle;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) char needsAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)addItem:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (id)items;
- (id)_expirationOrInformativeText;
- (id)footerText;
- (char)restrictionEnabled;
- (char)shouldCoalesceItems;
- (id)subtitleText;

@end
