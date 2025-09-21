@class CNUIAggregateUndoableCommand;

@interface CNUISaveNonCuratedValueOntoNonExistingContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIAggregateUndoableCommand *aggregateCommand;

- (void).cxx_destruct;
- (id)copyOfContactWithNameValuesOnly:(id)a0 andInsertedLabeledValue:(id)a1 forKey:(id)a2;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 contact:(id)a1 nonCuratedValueToSave:(id)a2 forKey:(id)a3 containerIdentifier:(id)a4 setAsMeContact:(char)a5 ignoresGuardianRestrictions:(char)a6;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(char)a1;

@end
