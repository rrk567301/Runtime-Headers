@class CNUIUndoableCommand;

@interface CNUIRejectNonCuratedValueCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNUIUndoableCommand *command;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 donaionStore:(id)a1 nonCuratedValueToReject:(id)a2 ignoresGuardianRestrictions:(char)a3;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(char)a1;

@end
