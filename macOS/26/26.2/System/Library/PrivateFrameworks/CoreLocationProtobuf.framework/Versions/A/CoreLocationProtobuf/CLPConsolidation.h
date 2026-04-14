@class NSString;

@interface CLPConsolidation : PBCodable <NSCopying> {
    struct { unsigned char possibleDuplicate : 1; } _has;
}

@property (nonatomic) BOOL hasPossibleDuplicate;
@property (nonatomic) BOOL possibleDuplicate;
@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;

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
