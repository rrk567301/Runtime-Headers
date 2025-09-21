@interface MSUnsubscribeTriageAction : MSTriageAction

@property (nonatomic) BOOL isSenderAlreadyBlocked;

- (id)_changeAction;

@end
