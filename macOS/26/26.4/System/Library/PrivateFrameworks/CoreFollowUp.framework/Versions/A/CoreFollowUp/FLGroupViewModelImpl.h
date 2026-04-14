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

- (id)items;
- (void)addItem:(id)a0;
- (id)footerText;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (BOOL)restrictionEnabled;
- (id)_expirationOrInformativeText;
- (id)subtitleText;
- (BOOL)shouldCoalesceItems;

@end
