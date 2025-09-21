@class NSString;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion : PBCodable <NSCopying> {
    struct { unsigned char ncvNumber : 1; unsigned char osRelease : 1; unsigned char patchNumber : 1; } _has;
}

@property (nonatomic) char hasOsRelease;
@property (nonatomic) unsigned int osRelease;
@property (nonatomic) char hasNcvNumber;
@property (nonatomic) unsigned int ncvNumber;
@property (nonatomic) char hasPatchNumber;
@property (nonatomic) unsigned int patchNumber;
@property (readonly, nonatomic) char hasBoltTaskId;
@property (retain, nonatomic) NSString *boltTaskId;

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
