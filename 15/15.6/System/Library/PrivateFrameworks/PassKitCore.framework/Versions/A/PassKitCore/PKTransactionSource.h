@class PKPaymentPass, NSSet, PKPeerPaymentAccount, PKAccountUser, PKAccount;

@interface PKTransactionSource : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSSet *transactionSourceIdentifiers;
@property (readonly, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (readonly, nonatomic) PKPaymentPass *paymentPass;
@property (readonly, nonatomic) PKAccountUser *accountUser;
@property (readonly, nonatomic) PKAccount *account;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithAccount:(id)a0;
- (id)initWithAccountUser:(id)a0;
- (id)initWithPaymentPass:(id)a0;
- (id)initWithPeerPaymentAccount:(id)a0;

@end
