@class NSArray, ABAccount;

@interface ABHeaderGroupEntry : ABGroupEntry {
    ABAccount *_account;
}

@property (readonly, copy) NSArray *children;

- (long long)textAlignment;
- (id)account;
- (id)accessibilityDescription;
- (id)initWithName:(id)a0;
- (double)rowHeight;
- (void).cxx_destruct;
- (BOOL)isGroupItem;
- (id)tableViewIdentifier;
- (BOOL)canShowStatus;
- (BOOL)canShowStatusForAccountWithIdentifier:(id)a0;
- (id)initWithName:(id)a0 account:(id)a1 children:(id)a2;

@end
