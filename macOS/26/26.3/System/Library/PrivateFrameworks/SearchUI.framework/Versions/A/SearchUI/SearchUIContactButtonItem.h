@class NSString, CNContactQuickActionsController;

@interface SearchUIContactButtonItem : SearchUIButtonItem

@property (retain, nonatomic) NSString *actionType;
@property (retain, nonatomic) CNContactQuickActionsController *quickActionsController;

- (void)buttonPressed;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)command;
- (BOOL)hasState;
- (id)previewMenu;

@end
