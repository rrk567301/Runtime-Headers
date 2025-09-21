@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@interface _INPBFinancialAccountValue : PBCodable <_INPBFinancialAccountValue, NSSecureCoding, NSCopying> {
    struct { unsigned char accountType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (readonly, nonatomic) char hasAccountNickname;
@property (copy, nonatomic) NSString *accountNumber;
@property (readonly, nonatomic) char hasAccountNumber;
@property (nonatomic) int accountType;
@property (nonatomic) char hasAccountType;
@property (retain, nonatomic) _INPBBalanceAmountValue *balance;
@property (readonly, nonatomic) char hasBalance;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (readonly, nonatomic) char hasOrganizationName;
@property (retain, nonatomic) _INPBBalanceAmountValue *secondaryBalance;
@property (readonly, nonatomic) char hasSecondaryBalance;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) char hasValueMetadata;
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
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsAccountType:(id)a0;
- (id)accountTypeAsString:(int)a0;

@end
