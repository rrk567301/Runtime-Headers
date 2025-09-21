@class NSString;

@interface CLPConsolidation : PBCodable <NSCopying> {
    struct { unsigned char possibleDuplicate : 1; } _has;
}

@property (nonatomic) char hasPossibleDuplicate;
@property (nonatomic) char possibleDuplicate;
@property (readonly, nonatomic) char hasVersion;
@property (retain, nonatomic) NSString *version;

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
