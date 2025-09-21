@class NSString, CNContactQuickActionsController;

@interface SearchUIContactButtonItem : SearchUIButtonItem

@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNContactQuickActionsController *quickActionsController;

- (id)command;
- (void)buttonPressed;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasState;
- (id)previewMenu;

@end
