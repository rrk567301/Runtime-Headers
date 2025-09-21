@class NSString;

@interface PKPendingPrecursorPassCredential : PKPendingProvisioning <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) NSString *passTypeIdentifier;
@property (retain, nonatomic) NSString *passSerialNumber;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)type;
- (id)credential;
- (id)initWithPassTypeIdentifier:(id)a0 passSerialNumber:(id)a1;
- (id)initForDatabase;
- (char)representsPass:(id)a0;
- (void)_copyIntoPendingProvision:(id)a0;
- (id)initWithPrecursorCredential:(id)a0;
- (char)representsCredential:(id)a0;

@end
