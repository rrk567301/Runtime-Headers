@class NSString, CNContactQuickActionsController;

@interface SearchUIContactButtonItem : SearchUIButtonItem

@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNContactQuickActionsController *quickActionsController;

- (unsigned long long)hash;
- (id)command;
- (BOOL)isEqual:(id)a0;
- (void)buttonPressed;
- (void).cxx_destruct;
- (BOOL)hasState;
- (id)previewMenu;

@end
