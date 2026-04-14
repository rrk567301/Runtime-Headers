@class NSString, NSArray, NSDate;

@interface PKAccountStatementMetadata : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *accountIdentifier;
@property (nonatomic) unsigned long long accountType;
@property (copy, nonatomic) NSString *statementIdentifier;
@property (copy, nonatomic) NSDate *openingDate;
@property (copy, nonatomic) NSDate *closingDate;
@property (nonatomic) BOOL hasBeenProcessed;
@property (copy, nonatomic) NSDate *lastReportDate;
@property (nonatomic) long long reportCount;
@property (copy, nonatomic) NSArray *items;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (id)initWithArray:(id)a0 accountIdentifier:(id)a1 statementIdentifier:(id)a2;
- (id)itemsMissingFromDevice;
- (id)reportForMissingItems;

@end
