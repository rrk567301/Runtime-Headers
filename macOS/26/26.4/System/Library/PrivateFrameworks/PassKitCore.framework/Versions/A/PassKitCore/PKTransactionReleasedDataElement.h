@class NSString;

@interface PKTransactionReleasedDataElement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *elementNamespace;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long retentionIntent;
@property (nonatomic) long long retentionPeriod;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToReleasedDataElement:(id)a0;

@end
