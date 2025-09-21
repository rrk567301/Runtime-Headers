@class NSString, NSArray, NSDate;

@interface PKAccountServicePayLaterFinancingPlanQuery : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *queryIdentifier;
@property (readonly, copy, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) unsigned long long queryItems;
@property (nonatomic) long long upcomingInstallmentsLimit;
@property (copy, nonatomic) NSArray *relevantFinancingPlanStates;
@property (copy, nonatomic) NSArray *countFinancingPlanStates;
@property (copy, nonatomic) NSDate *transactionStartDate;
@property (copy, nonatomic) NSDate *transactionEndDate;
@property (copy, nonatomic) NSDate *installmentDueOrPaidDateStart;
@property (copy, nonatomic) NSDate *installmentDueOrPaidDateEnd;

+ (id)descriptionForQueryItems:(unsigned long long)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)_isEqualToFinancingPlanQuery:(id)a0;
- (id)initWithAccountIdentifier:(id)a0 queryItems:(unsigned long long)a1;

@end
