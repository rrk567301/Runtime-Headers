@class NSSet, NSDate;

@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSSet *associatedAccounts;
@property (copy, nonatomic) NSSet *associatedAccountInvitations;
@property (copy, nonatomic) NSSet *associatedAccountRemovalRecords;
@property (nonatomic) double proactiveAssociatedAccountFetchPeriod;
@property (copy, nonatomic) NSDate *lastUpdated;
@property (nonatomic, getter=isAssociatedAccountStateDirty) char associatedAccountStateDirty;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0 lastUpdated:(id)a1;
- (void)enumerateAccountInvitationsUsingBlock:(id /* block */)a0;
- (void)enumerateAssociatedAccountsUsingBlock:(id /* block */)a0;
- (void)markAssociatedAccountActiveWithAltDSID:(id)a0 hasPresentedNotification:(char)a1;
- (void)markAssociatedAccountRemovalRecordWithAltDSID:(id)a0 hasPresentedNotification:(char)a1;

@end
