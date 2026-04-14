@class NSString;
@protocol PKPayLaterFundingSourceDetails;

@interface PKPayLaterPaymentFundingSource : NSObject <PKPayLaterFundingSource>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<PKPayLaterFundingSourceDetails> details;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)displayName;
- (id)dictionaryRepresentation;
- (id)panSuffix;
- (id)paymentPassDetails;
- (id)bankDetails;
- (id)unmaskedPanSuffix;
- (BOOL)isEqualToFundingSource:(id)a0;

@end
