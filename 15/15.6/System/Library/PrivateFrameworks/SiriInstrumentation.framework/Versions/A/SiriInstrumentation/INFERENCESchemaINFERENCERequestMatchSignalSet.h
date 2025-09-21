@class NSData;

@interface INFERENCESchemaINFERENCERequestMatchSignalSet : SISchemaInstrumentationMessage {
    struct { unsigned char numPrimaryTokens : 1; unsigned char areAllQueryTokensInContact : 1; unsigned char areAllPrimaryContactTokensInQuery : 1; unsigned char isGivenNameMatch : 1; unsigned char isMiddleNameMatch : 1; unsigned char isFamilyNameMatch : 1; unsigned char isOrganizationNameMatch : 1; unsigned char isWeakOrganizationMatch : 1; unsigned char isNicknameMatch : 1; unsigned char isNamePrefixMatch : 1; unsigned char isNameSuffixMatch : 1; unsigned char isHandleQueryMatch : 1; unsigned char isHandleQueryLabelNameMatch : 1; } _has;
}

@property (nonatomic) unsigned int numPrimaryTokens;
@property (nonatomic) char hasNumPrimaryTokens;
@property (nonatomic) char areAllQueryTokensInContact;
@property (nonatomic) char hasAreAllQueryTokensInContact;
@property (nonatomic) char areAllPrimaryContactTokensInQuery;
@property (nonatomic) char hasAreAllPrimaryContactTokensInQuery;
@property (nonatomic) char isGivenNameMatch;
@property (nonatomic) char hasIsGivenNameMatch;
@property (nonatomic) char isMiddleNameMatch;
@property (nonatomic) char hasIsMiddleNameMatch;
@property (nonatomic) char isFamilyNameMatch;
@property (nonatomic) char hasIsFamilyNameMatch;
@property (nonatomic) char isOrganizationNameMatch;
@property (nonatomic) char hasIsOrganizationNameMatch;
@property (nonatomic) char isWeakOrganizationMatch;
@property (nonatomic) char hasIsWeakOrganizationMatch;
@property (nonatomic) char isNicknameMatch;
@property (nonatomic) char hasIsNicknameMatch;
@property (nonatomic) char isNamePrefixMatch;
@property (nonatomic) char hasIsNamePrefixMatch;
@property (nonatomic) char isNameSuffixMatch;
@property (nonatomic) char hasIsNameSuffixMatch;
@property (nonatomic) char isHandleQueryMatch;
@property (nonatomic) char hasIsHandleQueryMatch;
@property (nonatomic) char isHandleQueryLabelNameMatch;
@property (nonatomic) char hasIsHandleQueryLabelNameMatch;
@property (readonly, nonatomic) NSData *jsonData;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)deleteAreAllPrimaryContactTokensInQuery;
- (void)deleteAreAllQueryTokensInContact;
- (void)deleteIsFamilyNameMatch;
- (void)deleteIsGivenNameMatch;
- (void)deleteIsHandleQueryLabelNameMatch;
- (void)deleteIsHandleQueryMatch;
- (void)deleteIsMiddleNameMatch;
- (void)deleteIsNamePrefixMatch;
- (void)deleteIsNameSuffixMatch;
- (void)deleteIsNicknameMatch;
- (void)deleteIsOrganizationNameMatch;
- (void)deleteIsWeakOrganizationMatch;
- (void)deleteNumPrimaryTokens;
- (id)suppressMessageUnderConditions;

@end
