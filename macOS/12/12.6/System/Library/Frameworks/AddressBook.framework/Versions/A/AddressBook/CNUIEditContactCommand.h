@class CNContact;

@interface CNUIEditContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNContact *updatedContact;
@property (retain, nonatomic) CNContact *originalContact;

- (void).cxx_destruct;
- (id)actionName;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (id)initWithContact:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;
- (void)executeWithCNSaveRequest:(id)a0;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (id)mutableUpdatedContactWithSelfAsSnapshot;
- (id)diffUpdatedContactToOriginalContact;

@end
