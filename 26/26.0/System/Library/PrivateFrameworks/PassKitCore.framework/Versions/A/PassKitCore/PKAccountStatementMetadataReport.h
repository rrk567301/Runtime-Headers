@class NSString, NSArray, NSDate;

@interface PKAccountStatementMetadataReport : PKAccountReport <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *statementIdentifier;
@property (readonly, copy, nonatomic) NSDate *openingDate;
@property (readonly, copy, nonatomic) NSDate *closingDate;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithItems:(id)a0 accountIdentifier:(id)a1 statementIdentifier:(id)a2 openingDate:(id)a3 closingDate:(id)a4;

@end
