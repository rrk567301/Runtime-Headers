@class NSData;

@interface MXSpeechProfile : PBCodable <NSCopying> {
    struct { unsigned char moreDataFollows : 1; } _has;
}

@property (nonatomic) BOOL hasMoreDataFollows;
@property (nonatomic) BOOL moreDataFollows;
@property (readonly, nonatomic) BOOL hasLanguageProfile;
@property (retain, nonatomic) NSData *languageProfile;

- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (id)dictionaryRepresentation;

@end
