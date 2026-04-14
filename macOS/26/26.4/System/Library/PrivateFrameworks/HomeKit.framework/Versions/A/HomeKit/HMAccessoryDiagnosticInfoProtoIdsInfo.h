@class NSString;

@interface HMAccessoryDiagnosticInfoProtoIdsInfo : PBCodable <NSCopying> {
    struct { unsigned char idsState : 1; } _has;
}

@property (nonatomic) BOOL hasIdsState;
@property (nonatomic) int idsState;
@property (readonly, nonatomic) BOOL hasIdsIdentifierString;
@property (retain, nonatomic) NSString *idsIdentifierString;

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
- (int)StringAsIdsState:(id)a0;
- (id)idsStateAsString:(int)a0;

@end
