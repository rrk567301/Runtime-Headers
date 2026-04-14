@class NSString;

@interface PKTransactionSearchQuery : PKSearchQuery

@property (retain, nonatomic) NSString *passUniqueIdentifier;

+ (BOOL)supportsSecureCoding;

- (id)description;
- (unsigned long long)domain;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 keyboardLanguage:(id)a1 passUniqueIdentifier:(id)a2;

@end
