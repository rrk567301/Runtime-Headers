@class NSArray, ABAccount;

@interface ABHeaderGroupEntry : ABGroupEntry {
    ABAccount *_account;
}

@property (readonly, copy) NSArray *children;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)accessibilityDescription;
- (double)rowHeight;
- (long long)textAlignment;
- (id)account;
- (id)tableViewIdentifier;
- (id)initWithName:(id)a0 account:(id)a1 children:(id)a2;
- (BOOL)canShowStatusForAccountWithIdentifier:(id)a0;
- (BOOL)isGroupItem;
- (BOOL)canShowStatus;

@end
