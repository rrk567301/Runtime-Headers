@class CNDonationStore, CNLabeledValue;

@interface CNUIRejectDonatedValueCommand : CNUIUndoableCommand

@property (retain, nonatomic) CNDonationStore *donationStore;
@property (retain, nonatomic) CNLabeledValue *donatedValueToReject;

- (void).cxx_destruct;
- (void)executeWithCNSaveRequest:(id)a0;
- (id)initWithContactStore:(id)a0 donationStore:(id)a1 donatedValueToReject:(id)a2 ignoresGuardianRestrictions:(char)a3;
- (id)initWithContactStore:(id)a0 ignoresGuardianRestrictions:(char)a1;

@end
