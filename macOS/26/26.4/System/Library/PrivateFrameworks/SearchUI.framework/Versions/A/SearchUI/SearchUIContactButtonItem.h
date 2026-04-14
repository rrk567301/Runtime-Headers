@class NSString, CNContactQuickActionsController;

@interface SearchUIContactButtonItem : SearchUIButtonItem

@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNContactQuickActionsController *quickActionsController;

- (id)command;
- (BOOL)isEqual:(id)a0;
- (void)buttonPressed;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)hasState;
- (id)previewMenu;

@end
