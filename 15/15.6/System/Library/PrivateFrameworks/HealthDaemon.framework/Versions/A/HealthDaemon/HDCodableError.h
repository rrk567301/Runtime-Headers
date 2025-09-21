@class NSString;

@interface HDCodableError : PBCodable <NSCopying> {
    struct { unsigned char code : 1; } _has;
}

@property (readonly, nonatomic) char hasDomain;
@property (retain, nonatomic) NSString *domain;
@property (nonatomic) char hasCode;
@property (nonatomic) long long code;
@property (readonly, nonatomic) char hasLocalizedDescription;
@property (retain, nonatomic) NSString *localizedDescription;

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
