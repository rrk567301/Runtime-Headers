@class NSString;

@interface SIRINLUINTERNALSNLP_INTERMEDIATESNLPAssetVersion : PBCodable <NSCopying> {
    struct { unsigned char ncvNumber : 1; unsigned char osRelease : 1; unsigned char patchNumber : 1; } _has;
}

@property (nonatomic) BOOL hasOsRelease;
@property (nonatomic) unsigned int osRelease;
@property (nonatomic) BOOL hasNcvNumber;
@property (nonatomic) unsigned int ncvNumber;
@property (nonatomic) BOOL hasPatchNumber;
@property (nonatomic) unsigned int patchNumber;
@property (readonly, nonatomic) BOOL hasBoltTaskId;
@property (retain, nonatomic) NSString *boltTaskId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;

@end
