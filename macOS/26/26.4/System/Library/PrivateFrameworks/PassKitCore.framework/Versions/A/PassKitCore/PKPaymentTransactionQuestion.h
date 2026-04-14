@class NSString, NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL answered;
@property (nonatomic) BOOL answeredOnThisDevice;
@property (copy, nonatomic) NSString *answer;
@property (nonatomic) BOOL messageDismissed;
@property (readonly, nonatomic) NSArray *allowedAnswers;

- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqualToQuestion:(id)a0;
- (BOOL)isExpiredWithTransactionDate:(id)a0;

@end
