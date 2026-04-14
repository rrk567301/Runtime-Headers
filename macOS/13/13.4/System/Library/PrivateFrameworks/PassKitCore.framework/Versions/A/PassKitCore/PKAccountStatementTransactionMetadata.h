@class NSString;

@interface PKAccountStatementTransactionMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *transactionIdentifier;
@property (copy, nonatomic) NSString *originatorAltDSID;
@property (copy, nonatomic) NSString *zoneName;
@property (nonatomic) unsigned long long status;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;

@end
