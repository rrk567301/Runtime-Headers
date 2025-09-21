@class NSString;

@interface PKTransactionSearchQuery : PKSearchQuery

@property (retain, nonatomic) NSString *passUniqueIdentifier;

+ (char)supportsSecureCoding;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)domain;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1 passUniqueIdentifier:(id)a2;

@end
