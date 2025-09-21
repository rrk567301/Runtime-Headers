@class _INPBDataString, NSString, _INPBIntentMetadata;

@interface _INPBSearchForAccountsIntent : PBCodable <_INPBSearchForAccountsIntent, NSSecureCoding, NSCopying> {
    struct { unsigned char accountType : 1; unsigned char requestedBalanceType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (retain, nonatomic) _INPBDataString *accountNickname;
@property (readonly, nonatomic) char hasAccountNickname;
@property (nonatomic) int accountType;
@property (nonatomic) char hasAccountType;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata;
@property (readonly, nonatomic) char hasIntentMetadata;
@property (retain, nonatomic) _INPBDataString *organizationName;
@property (readonly, nonatomic) char hasOrganizationName;
@property (nonatomic) int requestedBalanceType;
@property (nonatomic) char hasRequestedBalanceType;
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
- (int)StringAsRequestedBalanceType:(id)a0;
- (id)accountTypeAsString:(int)a0;
- (id)requestedBalanceTypeAsString:(int)a0;

@end
