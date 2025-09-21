@class NSString;

@interface PKPendingAccountCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long feature;
@property (retain, nonatomic) NSString *sharingInstanceIdentifier;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (id)initForDatabase;
- (char)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithAccountCredential:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 feature:(unsigned long long)a1 sharingInstanceIdentifier:(id)a2;
- (id)initWithAccountReferenceCredential:(id)a0;
- (char)representsCredential:(id)a0;

@end
