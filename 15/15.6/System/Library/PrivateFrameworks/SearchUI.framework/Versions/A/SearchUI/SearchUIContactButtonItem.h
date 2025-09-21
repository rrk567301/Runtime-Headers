@class NSString, CNContactQuickActionsController;

@interface SearchUIContactButtonItem : SearchUIButtonItem

@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNContactQuickActionsController *quickActionsController;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)command;
- (char)hasState;
- (void)buttonPressed;
- (id)previewMenu;

@end
