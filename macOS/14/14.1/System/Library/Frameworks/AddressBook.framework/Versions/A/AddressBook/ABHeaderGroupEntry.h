@class NSArray, ABAccount;

@interface ABHeaderGroupEntry : ABGroupEntry {
    ABAccount *_account;
}

@property (readonly, copy) NSArray *children;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)account;
- (id)accessibilityDescription;
- (double)rowHeight;
- (long long)textAlignment;
- (BOOL)isGroupItem;
- (id)tableViewIdentifier;
- (BOOL)canShowStatus;
- (BOOL)canShowStatusForAccountWithIdentifier:(id)a0;
- (id)initWithName:(id)a0 account:(id)a1 children:(id)a2;

@end
