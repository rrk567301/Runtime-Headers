@class NSString, CNContact;

@interface CNUIDeleteContactCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNContact *contact;
@property (copy, nonatomic) NSString *containerIdentifier;

- (void).cxx_destruct;
- (id)actionName;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;
- (void)executeWithCNSaveRequest:(id)a0;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (id)initWithContact:(id)a0 containerIdentifier:(id)a1 contactStore:(id)a2 ignoresGuardianRestrictions:(BOOL)a3;

@end
