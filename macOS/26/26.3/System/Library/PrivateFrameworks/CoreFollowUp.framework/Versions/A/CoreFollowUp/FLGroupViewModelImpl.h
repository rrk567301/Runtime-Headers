@class NSString, NSMutableArray;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSMutableArray *_mutableItems;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *rowTitle;
@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL needsAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0;
- (id)items;
- (id)initWithIdentifier:(id)a0;
- (BOOL)shouldCoalesceItems;
- (id)_expirationOrInformativeText;
- (id)subtitleText;
- (void).cxx_destruct;
- (id)footerText;
- (BOOL)restrictionEnabled;

@end
