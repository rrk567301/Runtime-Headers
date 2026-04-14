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

+ (Class)accessTokenBlockedIssuersType;
+ (Class)accessTokenKnownOriginsType;
+ (Class)nonDefaultAttestersType;

- (id)accessTokenKnownOriginsAtIndex:(unsigned long long)a0;
- (void)addAccessTokenKnownOrigins:(id)a0;
- (void)setAccessTokenTypes:(unsigned int *)a0 count:(unsigned long long)a1;
- (unsigned long long)accessTokenKnownOriginsCount;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)accessTokenTypesAtIndex:(unsigned long long)a0;
- (void)clearAccessTokenBlockedIssuers;
- (id)nonDefaultAttestersAtIndex:(unsigned long long)a0;
- (void)clearNonDefaultAttesters;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)authTypeAsString:(int)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (int)StringAsAuthType:(id)a0;
- (unsigned long long)nonDefaultAttestersCount;
- (void)addAccessTokenTypes:(unsigned int)a0;
- (unsigned long long)hash;
- (void)addNonDefaultAttesters:(id)a0;
- (void)clearAccessTokenTypes;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)accessTokenBlockedIssuersCount;
- (void)mergeFrom:(id)a0;
- (id)description;
- (id)accessTokenBlockedIssuersAtIndex:(unsigned long long)a0;
- (void)writeTo:(id)a0;
- (void)dealloc;
- (void)clearAccessTokenKnownOrigins;
- (void)addAccessTokenBlockedIssuers:(id)a0;

@end
