@class NSString, NSMutableArray;

@interface NSPPrivacyProxyAuthenticationInfo : PBCodable <NSCopying> {
    struct { unsigned int *list; unsigned long long count; unsigned long long size; } _accessTokenTypes;
    struct { unsigned char authType : 1; } _has;
}

@property (nonatomic) BOOL hasAuthType;
@property (nonatomic) int authType;
@property (retain, nonatomic) NSString *authURL;
@property (readonly, nonatomic) BOOL hasAccessTokenURL;
@property (retain, nonatomic) NSString *accessTokenURL;
@property (readonly, nonatomic) unsigned long long accessTokenTypesCount;
@property (readonly, nonatomic) unsigned int *accessTokenTypes;
@property (retain, nonatomic) NSMutableArray *accessTokenKnownOrigins;
@property (retain, nonatomic) NSMutableArray *accessTokenBlockedIssuers;
@property (retain, nonatomic) NSMutableArray *nonDefaultAttesters;

+ (Class)accessTokenKnownOriginsType;
+ (Class)nonDefaultAttestersType;
+ (Class)accessTokenBlockedIssuersType;

- (unsigned int)accessTokenTypesAtIndex:(unsigned long long)a0;
- (unsigned long long)nonDefaultAttestersCount;
- (void)clearNonDefaultAttesters;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)StringAsAuthType:(id)a0;
- (id)nonDefaultAttestersAtIndex:(unsigned long long)a0;
- (unsigned long long)accessTokenBlockedIssuersCount;
- (unsigned long long)accessTokenKnownOriginsCount;
- (id)accessTokenKnownOriginsAtIndex:(unsigned long long)a0;
- (void)addAccessTokenTypes:(unsigned int)a0;
- (id)description;
- (void)clearAccessTokenBlockedIssuers;
- (void)dealloc;
- (void)clearAccessTokenTypes;
- (void)addAccessTokenBlockedIssuers:(id)a0;
- (void).cxx_destruct;
- (void)setAccessTokenTypes:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)authTypeAsString:(int)a0;
- (void)mergeFrom:(id)a0;
- (id)accessTokenBlockedIssuersAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (void)addAccessTokenKnownOrigins:(id)a0;
- (void)clearAccessTokenKnownOrigins;
- (void)copyTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)addNonDefaultAttesters:(id)a0;
- (void)writeTo:(id)a0;

@end
