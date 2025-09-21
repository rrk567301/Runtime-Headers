@class NSString;

@interface NTPBEmailSubscriptionRequest : PBRequest <NSCopying> {
    struct { unsigned char dsId : 1; } _has;
}

@property (nonatomic) char hasDsId;
@property (nonatomic) long long dsId;
@property (readonly, nonatomic) char hasUserStorefrontId;
@property (retain, nonatomic) NSString *userStorefrontId;
@property (readonly, nonatomic) char hasLanguageCode;
@property (retain, nonatomic) NSString *languageCode;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
