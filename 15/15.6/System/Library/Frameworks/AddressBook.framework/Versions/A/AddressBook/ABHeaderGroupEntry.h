@class NSArray, ABAccount;

@interface ABHeaderGroupEntry : ABGroupEntry {
    ABAccount *_account;
}

@property (readonly, copy) NSArray *children;

- (void).cxx_destruct;
- (id)initWithName:(id)a0;
- (id)account;
- (id)accessibilityDescription;
- (char)isGroupItem;
- (double)rowHeight;
- (long long)textAlignment;
- (id)tableViewIdentifier;
- (char)canShowStatus;
- (char)canShowStatusForAccountWithIdentifier:(id)a0;
- (id)initWithName:(id)a0 account:(id)a1 children:(id)a2;

@end
