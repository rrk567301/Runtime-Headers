@class NSString, NSArray, NSDate;

@interface PKAccountStatementMetadataReport : PKAccountReport <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *statementIdentifier;
@property (readonly, copy, nonatomic) NSDate *openingDate;
@property (readonly, copy, nonatomic) NSDate *closingDate;
@property (readonly, copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithItems:(id)a0 accountIdentifier:(id)a1 statementIdentifier:(id)a2 openingDate:(id)a3 closingDate:(id)a4;

@end
