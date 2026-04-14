@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) BOOL answered;
@property (nonatomic) BOOL answeredOnThisDevice;
@property (readonly, nonatomic) NSArray *allowedAnswers;

- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToQuestion:(id)a0;

@end
