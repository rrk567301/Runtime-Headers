@interface HMAccessoryDiagnosticInfoProtoCloudInfo : PBCodable <NSCopying> {
    struct { unsigned char cloudState : 1; unsigned char octagonState : 1; unsigned char firstCloudImportComplete : 1; } _has;
}

@property (nonatomic) char hasCloudState;
@property (nonatomic) int cloudState;
@property (nonatomic) char hasOctagonState;
@property (nonatomic) int octagonState;
@property (nonatomic) char hasFirstCloudImportComplete;
@property (nonatomic) char firstCloudImportComplete;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (char)readFrom:(id)a0;
- (void)writeTo:(id)a0;
- (int)StringAsCloudState:(id)a0;
- (int)StringAsOctagonState:(id)a0;
- (id)cloudStateAsString:(int)a0;
- (id)octagonStateAsString:(int)a0;

@end
