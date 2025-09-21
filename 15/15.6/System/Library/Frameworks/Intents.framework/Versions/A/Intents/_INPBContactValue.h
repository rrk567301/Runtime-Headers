@class _INPBContactHandle, NSArray, NSString, _INPBImageValue, _INPBValueMetadata;

@interface _INPBContactValue : PBCodable <_INPBContactValue, NSSecureCoding, NSCopying> {
    struct { unsigned char isContactSuggestion : 1; unsigned char isMe : 1; unsigned char searchProvider : 1; unsigned char suggestionType : 1; } _has;
}

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *aliases;
@property (readonly, nonatomic) unsigned long long aliasesCount;
@property (retain, nonatomic) _INPBContactHandle *contactHandle;
@property (readonly, nonatomic) char hasContactHandle;
@property (copy, nonatomic) NSString *customIdentifier;
@property (readonly, nonatomic) char hasCustomIdentifier;
@property (copy, nonatomic) NSString *firstName;
@property (readonly, nonatomic) char hasFirstName;
@property (copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) char hasFullName;
@property (copy, nonatomic) NSString *handle;
@property (readonly, nonatomic) char hasHandle;
@property (retain, nonatomic) _INPBImageValue *image;
@property (readonly, nonatomic) char hasImage;
@property (nonatomic) char isContactSuggestion;
@property (nonatomic) char hasIsContactSuggestion;
@property (nonatomic) char isMe;
@property (nonatomic) char hasIsMe;
@property (copy, nonatomic) NSString *lastName;
@property (readonly, nonatomic) char hasLastName;
@property (copy, nonatomic) NSString *middleName;
@property (readonly, nonatomic) char hasMiddleName;
@property (copy, nonatomic) NSString *namePrefix;
@property (readonly, nonatomic) char hasNamePrefix;
@property (copy, nonatomic) NSString *nameSuffix;
@property (readonly, nonatomic) char hasNameSuffix;
@property (copy, nonatomic) NSString *nickName;
@property (readonly, nonatomic) char hasNickName;
@property (copy, nonatomic) NSString *phonemeData;
@property (readonly, nonatomic) char hasPhonemeData;
@property (copy, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) char hasPhoneticFirstName;
@property (copy, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) char hasPhoneticLastName;
@property (copy, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) char hasPhoneticMiddleName;
@property (copy, nonatomic) NSString *phoneticNamePrefix;
@property (readonly, nonatomic) char hasPhoneticNamePrefix;
@property (copy, nonatomic) NSString *phoneticNameSuffix;
@property (readonly, nonatomic) char hasPhoneticNameSuffix;
@property (copy, nonatomic) NSString *relationship;
@property (readonly, nonatomic) char hasRelationship;
@property (nonatomic) int searchProvider;
@property (nonatomic) char hasSearchProvider;
@property (nonatomic) int suggestionType;
@property (nonatomic) char hasSuggestionType;
@property (retain, nonatomic) _INPBValueMetadata *valueMetadata;
@property (readonly, nonatomic) char hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aliasesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (void)addAliases:(id)a0;
- (int)StringAsSuggestionType:(id)a0;
- (id)suggestionTypeAsString:(int)a0;
- (id)aliasesAtIndex:(unsigned long long)a0;
- (int)StringAsSearchProvider:(id)a0;
- (void)clearAliases;
- (id)searchProviderAsString:(int)a0;

@end
