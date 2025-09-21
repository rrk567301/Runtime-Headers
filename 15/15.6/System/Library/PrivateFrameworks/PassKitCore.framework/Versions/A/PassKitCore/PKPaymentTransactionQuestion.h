@class NSArray, NSDate;

@interface PKPaymentTransactionQuestion : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) NSDate *expirationDate;
@property (nonatomic) char answered;
@property (nonatomic) char answeredOnThisDevice;
@property (readonly, nonatomic) NSArray *allowedAnswers;

- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)isEqualToQuestion:(id)a0;

@end
