@class CNUIUndoableCommand;

@interface CNUISaveSuggestedMeContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIUndoableCommand *aggreageCommand;

- (void).cxx_destruct;
- (id)copyOfContactWithNameValuesAndUserCreatedMultiValues:(id)a0;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 containerIdentifier:(id)a2 ignoresGuardianRestrictions:(char)a3;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(char)a1;

@end
