@class NSString, NSMutableArray;

@interface PPPBContactNameRecord : PBCodable <NSCopying> {
    struct { unsigned char score : 1; unsigned char changeType : 1; unsigned char source : 1; } _has;
}

@property (readonly, nonatomic) char hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) char hasScore;
@property (nonatomic) double score;
@property (nonatomic) char hasSource;
@property (nonatomic) unsigned char source;
@property (nonatomic) char hasChangeType;
@property (nonatomic) unsigned char changeType;
@property (readonly, nonatomic) char hasSourceIdentifier;
@property (retain, nonatomic) NSString *sourceIdentifier;
@property (readonly, nonatomic) char hasFirstName;
@property (retain, nonatomic) NSString *firstName;
@property (readonly, nonatomic) char hasPhoneticFirstName;
@property (retain, nonatomic) NSString *phoneticFirstName;
@property (readonly, nonatomic) char hasMiddleName;
@property (retain, nonatomic) NSString *middleName;
@property (readonly, nonatomic) char hasPhoneticMiddleName;
@property (retain, nonatomic) NSString *phoneticMiddleName;
@property (readonly, nonatomic) char hasLastName;
@property (retain, nonatomic) NSString *lastName;
@property (readonly, nonatomic) char hasPhoneticLastName;
@property (retain, nonatomic) NSString *phoneticLastName;
@property (readonly, nonatomic) char hasOrganizationName;
@property (retain, nonatomic) NSString *organizationName;
@property (readonly, nonatomic) char hasJobTitle;
@property (retain, nonatomic) NSString *jobTitle;
@property (readonly, nonatomic) char hasNickname;
@property (retain, nonatomic) NSString *nickname;
@property (retain, nonatomic) NSMutableArray *relatedNames;
@property (retain, nonatomic) NSMutableArray *streetNames;
@property (retain, nonatomic) NSMutableArray *cityNames;

+ (Class)relatedNamesType;
+ (Class)streetNamesType;
+ (Class)cityNamesType;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (id)sourceAsString:(unsigned char)a0;
- (unsigned char)StringAsSource:(id)a0;
- (unsigned char)StringAsChangeType:(id)a0;
- (id)changeTypeAsString:(unsigned char)a0;
- (void)addRelatedNames:(id)a0;
- (void)clearRelatedNames;
- (id)relatedNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)relatedNamesCount;
- (void)addStreetNames:(id)a0;
- (void)addCityNames:(id)a0;
- (id)cityNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)cityNamesCount;
- (void)clearCityNames;
- (void)clearStreetNames;
- (id)streetNamesAtIndex:(unsigned long long)a0;
- (unsigned long long)streetNamesCount;

@end
