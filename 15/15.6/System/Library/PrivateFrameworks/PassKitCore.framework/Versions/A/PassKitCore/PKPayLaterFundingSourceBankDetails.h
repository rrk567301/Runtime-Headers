@class NSString;

@interface PKPayLaterFundingSourceBankDetails : NSObject <PKPayLaterFundingSourceDetails>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSString *accountNumberSuffix;
@property (copy, nonatomic) NSString *bankName;
@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) unsigned long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithAccountFundingSource:(id)a0;
- (id)initWithDictionary:(id)a0 type:(unsigned long long)a1;
- (char)isEqualToDetails:(id)a0;

@end
