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

- (void)clearNonDefaultAttesters;
- (id)authTypeAsString:(int)a0;
- (int)StringAsAuthType:(id)a0;
- (unsigned long long)accessTokenKnownOriginsCount;
- (void)writeTo:(id)a0;
- (void)clearAccessTokenKnownOrigins;
- (void)addAccessTokenKnownOrigins:(id)a0;
- (unsigned long long)hash;
- (void)setAccessTokenTypes:(unsigned int *)a0 count:(unsigned long long)a1;
- (id)accessTokenBlockedIssuersAtIndex:(unsigned long long)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)nonDefaultAttestersCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)accessTokenKnownOriginsAtIndex:(unsigned long long)a0;
- (void)copyTo:(id)a0;
- (void)addAccessTokenBlockedIssuers:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)clearAccessTokenBlockedIssuers;
- (unsigned int)accessTokenTypesAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void)addNonDefaultAttesters:(id)a0;
- (void)clearAccessTokenTypes;
- (id)dictionaryRepresentation;
- (id)nonDefaultAttestersAtIndex:(unsigned long long)a0;
- (void)dealloc;
- (void)addAccessTokenTypes:(unsigned int)a0;
- (unsigned long long)accessTokenBlockedIssuersCount;

@end
