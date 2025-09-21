@class NSString;

@interface HMAccessoryDiagnosticInfoProtoIdsInfo : PBCodable <NSCopying> {
    struct { unsigned char idsState : 1; } _has;
}

@property (nonatomic) char hasIdsState;
@property (nonatomic) int idsState;
@property (readonly, nonatomic) char hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;

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
- (int)StringAsIdsState:(id)a0;
- (id)idsStateAsString:(int)a0;

@end
