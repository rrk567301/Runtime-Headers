@class NSString, NSArray;

@interface CNUIAggregateUndoableCommand : CNUIUndoableCommand

@property (retain, nonatomic) NSString *actionName;
@property (retain, nonatomic) NSArray *undoableCommands;

- (void).cxx_destruct;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (void)executeWithCNSaveRequest:(id)a0;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (id)initWithUndoableCommands:(id)a0 actionName:(id)a1 contactStore:(id)a2 ignoresGuardianRestrictions:(BOOL)a3;

@end
