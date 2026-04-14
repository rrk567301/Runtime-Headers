@interface HMAccessoryDiagnosticInfoProtoCloudInfo : PBCodable <NSCopying> {
    struct { unsigned char cloudState : 1; unsigned char octagonState : 1; unsigned char firstCloudImportComplete : 1; } _has;
}

@property (nonatomic) BOOL hasCloudState;
@property (nonatomic) int cloudState;
@property (nonatomic) BOOL hasOctagonState;
@property (nonatomic) int octagonState;
@property (nonatomic) BOOL hasFirstCloudImportComplete;
@property (nonatomic) BOOL firstCloudImportComplete;

- (id)dictionaryRepresentation;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)copyTo:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (int)StringAsCloudState:(id)a0;
- (int)StringAsOctagonState:(id)a0;
- (id)cloudStateAsString:(int)a0;
- (id)octagonStateAsString:(int)a0;

@end
