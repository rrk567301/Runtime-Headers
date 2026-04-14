@class NSString;

@interface HDCodableSemanticDate : PBCodable <NSCopying> {
    struct { unsigned char date : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasKeyPath;
@property (retain, nonatomic) NSString *keyPath;
@property (nonatomic) BOOL hasDate;
@property (nonatomic) double date;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)writeTo:(id)a0;

@end
