@class CNContactsAppIntentDonation, CNContact;

@interface CNUIAppIntentsDonateUpdatedContactCommand : CNUIUndoableCommand

@property (readonly) CNContact *contact;
@property (retain) CNContactsAppIntentDonation *donation;

- (void).cxx_destruct;
- (void)executeUndoWithCNSaveRequest:(id)a0;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContact:(id)a0 contactStore:(id)a1 ignoresGuardianRestrictions:(BOOL)a2;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(BOOL)a1;

@end
