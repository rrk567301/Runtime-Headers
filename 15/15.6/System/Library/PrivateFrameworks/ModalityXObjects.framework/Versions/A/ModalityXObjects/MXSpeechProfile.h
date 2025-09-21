@class NSData;

@interface MXSpeechProfile : PBCodable <NSCopying> {
    struct { unsigned char moreDataFollows : 1; } _has;
}

@property (nonatomic) char hasMoreDataFollows;
@property (nonatomic) char moreDataFollows;
@property (readonly, nonatomic) char hasLanguageProfile;
@property (retain, nonatomic) NSData *languageProfile;

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

@end
