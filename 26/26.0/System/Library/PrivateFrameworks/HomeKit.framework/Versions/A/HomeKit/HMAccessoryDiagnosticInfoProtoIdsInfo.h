@class NSString;

@interface HMAccessoryDiagnosticInfoProtoIdsInfo : PBCodable <NSCopying> {
    struct { unsigned char idsState : 1; } _has;
}

@property (nonatomic) BOOL hasIdsState;
@property (nonatomic) int idsState;
@property (readonly, nonatomic) BOOL hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;

- (void)copyTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)writeTo:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (int)StringAsIdsState:(id)a0;
- (id)idsStateAsString:(int)a0;

@end
