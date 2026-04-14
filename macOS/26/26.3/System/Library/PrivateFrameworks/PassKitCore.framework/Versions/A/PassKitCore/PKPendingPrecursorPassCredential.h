@class NSString;

@interface PKPendingPrecursorPassCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;

- (id)type;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)credential;
- (void)encodeWithCoder:(id)a0;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;
- (id)initForDatabase;
- (BOOL)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithPrecursorCredential:(id)a0;
- (BOOL)representsCredential:(id)a0;

@end
